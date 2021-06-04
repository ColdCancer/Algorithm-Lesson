int v[MAX_N], prime[MAX_N], m;

void primes(int n) {
    memset(v, 0, sizeof(v));
    m = 0;
    for (int i = 2; i <= n; i++) {
        if (v[i] == 0) {
            v[i] = i, prime[++m] = i;
        }
        for (int j = i; j <= m; j++) {
            if (v[i] < prime[j] || n / i < prime[j]) break;
            v[i * prime[j]] = prime[j];
        }
    }
}