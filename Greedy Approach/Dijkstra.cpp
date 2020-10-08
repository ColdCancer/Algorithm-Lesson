# include <iostream>
# include <cstring>
using namespace std;
const int N = 1E3;
int n, m, g[N][N], dis[N], vis[N];
int Dijkstra() {
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;
    for(int i = 0; i < n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++) {
            if(vis[j] == 0 && dis[j] < dis[x]) x = j;
        }
        vis[x] = 1;
        for(int y = 1; y <= n; y++) {
            dis[y] = min(dis[y], dis[x] + g[x][y]);
        }
    }
    if(dis[n] == 0x3f3f3f3f) dis[n] = -1;
    return dis[n];
}
int main() {
    int x, y, z;

    memset(g, 0x3f, sizeof(g));
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        cin >> x >> y >> z;
        g[x][y] = min(g[x][y], z);
    }

    cout << Dijkstra() << endl;
    return 0;
}
