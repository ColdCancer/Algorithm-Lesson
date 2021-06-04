struct Trie {
    int ch[MAX_NODE][SIGMA_SIZE], val[MAX_NODE];
    int sz;

    Trie() { sz = 1; memset(ch[0], 0, sizeof(ch[0])); }

    int idx(char c) { return c - 'a'; }

    void insert(char *s, int v) {
        int u = 0, n = strlen(s);
        for (int i = 0; i < n; i++) {
            int c = idx(s[i]);
            if (!ch[u][c]) {
                memset(ch[sz], 0, sizeof(ch[sz]));
                val[sz] = 0;
                ch[u][c] = sz++;
            }
        }
        val[u] = v;
    }

    int search(char *s) {
        int u = 0, n = strlen(s);
        for (int i = 0; i < n; i++) {
            int c = idx(s[i]);
            if (!ch[u][c]) return -1;
            u = ch[u][c];
        }
        return val[u];
    }
};

