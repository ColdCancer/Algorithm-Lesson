# include <stdio.h>
# include "myfac.h"
# define N 10
void Quicksort(int* a, int x, int y)
{
    if(y <= x) return;
    int i = x - 1, j = y + 1, num = a[(x+y)/2];
    while(i < j) {
        while(a[++i] < num);
        while(num < a[--j]);
        if(i < j) swap(a[i], a[j]);
    }
    Quicksort(a, x, j);
    Quicksort(a, j + 1, y);
}
int main()
{
    int n = N, a[N];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Quicksort(a, 0, n - 1);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
