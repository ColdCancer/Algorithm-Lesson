# include <iostream>
using namespace std;
const int N = 10;
void mergeSort(int* a, int *b, int x, int y) {
    if(y <= x) return;
    int i = x, m = (x + y) / 2, j = m + 1;

    mergeSort(a, b, x, m);
    mergeSort(a, b, j, y);

    for(int k = x; k <= y; k++) {
        if(y < j || (i <= m && a[i] <= a[j]))
            b[k] = a[i++];
        else b[k] = a[j++];
    }
    for(int k = x; k <= y; k++) a[k] = b[k];
}
int main() {
    int n = N, a[N], b[N];
    for(int i = 0; i < n; i++) cin >> a[i];

    mergeSort(a, b, 0, n - 1);

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}
