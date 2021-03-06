void fine(char *T, char *P, int *f) {
    int n = strlen(T), m = strlen(P);
    getFail(P, f);
    for (int i = 0, j = 0; i < n; i++) {
        while (j && P[j] != T[i]) j = f[j];
        if (P[j] == T[i]) j++;
        if (j == m) printf("%d\t", i - m + 1);
    }
}

void getFail(char *P, int * f) {
    int m = strlen(P);
    f[0] = f[1] = 0;
    for (int i = 1; i < m; i++) {
        int j = f[i];
        while (j && P[i] != P[j]) j = f[j];
        f[i + 1] = (P[i] == P[j] ? j + 1 : 0);
    }
}