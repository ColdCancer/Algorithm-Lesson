# include <iostream>
using namespace std;
const int N = 10;
void mergeSort(int* a, int *b, int x, int y, int& ret) {
    if(y <= x) return;
    int i = x, m = (x + y) / 2, j = m + 1;

    mergeSort(a, b, x, m, ret);
    mergeSort(a, b, j, y, ret);

    for(int k = x; k <= y; k++) {
        if(y < j || (i <= m && a[i] <= a[j])) {
            b[k] = a[i++];
        } else {
            ret += m - i + 1;
            b[k] = a[j++];
        }
    }
    for(int k = x; k <= y; k++) a[k] = b[k];
}
int main() {
    int n = N, a[N], b[N], ret = 0;
    for(int i = 0; i < n; i++) cin >> a[i];

    mergeSort(a, b, 0, n - 1, ret);
    cout << ret << endl;

    return 0;
}
