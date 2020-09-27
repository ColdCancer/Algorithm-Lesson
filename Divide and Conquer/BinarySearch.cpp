# include <iostream>
using namespace std;
const int N = 10;
int BinarySearch(int* a, int x, int y, int target) {
    int lef = x, rig = y, mid;
    while(lef < rig) {
        mid = (lef + rig) / 2;
        if(a[mid] < target) lef = mid + 1;
        else rig = mid;
    }
    return a[rig] == target ? 1 : 0;
}
int main() {
    int n = N, x, a[N];

    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;

    int result = BinarySearch(a, 0, n - 1, x);

    cout << (result == 1 ? "yes" : "no") << endl;
    return 0;
}
