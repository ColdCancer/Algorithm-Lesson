# include "myfac.h"
# define N 10
int Select(int* a, int x, int y, int k) {
    if(y <= x) return a[k];
    int i = x - 1, j = y + 1, s = a[x];
    while(i < j) {
        while(a[++i] < s);
        while(s < a[--j]);
        if(i < j) swap(a[i], a[j]);
    }
    if(k <= j) return Select(a, x, j, k);
    else return Select(a, j + 1, y, k);
}
int main() {
    int n = N, a[N], k;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int num = Select(a, 0, n - 1, k - 1);
    printf("%d\n", num);
    return 0;
}
