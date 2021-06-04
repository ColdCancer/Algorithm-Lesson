int v[MAX_N], prime[MAX_N];

void primes(int n) {
    memset(v, 0, sizeof(v));
    for (int i = 2; i <= n; i++) {
        if (v[i]) continue;
        cout << "prime:" << i << endl;
        for (int j = i; j <= n / i; j++)
            v[i * j] = 1;
    }
}