# include <algorithm>
# include <iostream>
using namespace std;
typedef long long LL;
const int N = 6E3 + 5;
int t, n, father[N], ans;
struct Mation {
    int x, y, z;
    bool operator < (const Mation& tmp) const {
        return z < tmp.z;
    }
} mat[N];
int GetFather(int x) {
    return father[x] == x ? x : father[x] = GetFather(father[x]);
}
int main() {
    int x, y, z;
    cin >> n;
    for(int i = 1; i < n; i++) {
        cin >> x >> y >> z;
        mat[i] = (Mation){x, y, z};
    }

    for(int i = 1; i <= n; i++) father[i] = i;
    sort(mat + 1, mat + n);

    for(int i = 1; i < n; i++) {
        x = GetFather(mat[i].x);
        y = GetFather(mat[i].y);
        if(x != y) {
            ans += mat[i].z;
            father[x] = y;
        }
    }
    cout << ans << endl;
    return 0;
}
