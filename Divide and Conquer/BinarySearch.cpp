# include <stdio.h>
# define N 10
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
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int result = BinarySearch(a, 0, n - 1, x);
    printf((result == 1 ? "yes" : "no"));
    return 0;
}
