int phi(int n) {
    int ans = n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans = ans / i * (i - 1);
            while (n % i == 0) n /= i;
        }
    }
    if (1 < n) ans = ans / n * (n - 1);
    return ans;
}

void euler(int n) {
    for (int i = 2; i <= n; i++) phi[i] = i;
    for (int i = 2; i <= n; i++) {
        if (phi[i] != i) continue;
        for (int j = i; j <= n; j += i) {
            phi[j] = phi[j] / i * (i - 1);
        }
    }
}

int v[MAX_N], prime[MAX_N], phi[MAX_N], m = 0;
void euler_(int n) {
    memset(v, 0, sizeof(v));
    for (int i = 2; i <= n; i++) {
        if (v[i] == 0) {
            v[i] = i, prime[++m] = i, phi[i] = i - 1;
        }
        for (int j = 1; j <= m; j++) {
            if (v[i] < prime[j] || n / i < prime[j]) break;
            v[i * prime[j]] = prime[j];
            phi[i * prime[j]] = phi[i] * (i % prime[j] ? prime[j] - 1 : prime[j]);
        }
    }
}