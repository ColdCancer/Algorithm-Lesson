# include <iostream>
using namespace std;
const int N = 10, M = 10;
int n, m, v[N], w[N], dp[N][M];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> v[i] >> w[i];
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 0; j < n; j++) {
            if(i < v[j]) continue;
            if(j == 0) dp[j][i] = w[j];
            else {
                dp[j][i] = max(dp[j - 1][i], dp[j - 1][i - v[j]] + w[j]);
            }
        }
    }
    cout << dp[n - 1][m];

    return 0;
}
