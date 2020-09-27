# include <iostream>
using namespace std;
const int N = 1E2 + 10;
char s1[N], s2[N];
int n, m, dp[N][N];
int main() {
    cin >> n >> m >> (s1 + 1) >> (s2 + 1);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s1[i] != s2[j]) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            } else {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
        }
    }

    cout << dp[n][m] << endl;
    return 0;
}
