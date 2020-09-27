# include <iostream>
using namespace std;
const int N = 1E2 + 10;
int n, a[N], dp[N], ret;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    ret = dp[0] = max(0, a[0]);
    for(int i = 1; i < n; i++) {
        dp[i] = max(a[i], dp[i - 1] + a[i]);
        ret = max(ret, dp[i]);
    }
    cout << ret << endl;

    return 0;
}
