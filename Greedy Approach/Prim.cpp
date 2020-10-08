# include <iostream>
# include <cstring>
using namespace std;
const int N = 1E3+ 5;
int n, m, dis[N], g[N][N], vis[N];
int Prim() {
    int ret = 0;
    memset(dis, 0x3f, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    dis[1] = 0;
    for(int i = 1; i <= n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++)
            if(!vis[j] && dis[j] < dis[x]) x = j;
        vis[x] = 1;
        ret += dis[x];
        for(int j = 1; j <= n; j++)
            if(!vis[j]) dis[j] = min(dis[j], g[x][j]);
    }
    return ret;
}
int main() {
    int x, y, z;

    memset(g, 0x3f, sizeof(g));
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> x >> y >> z;
        g[y][x] = g[x][y] = min(g[x][y], z);
    }

    cout << Prim() << endl;
    return 0;
}
