#include<bits/stdc++.h>
using i64 = long long;

auto main() ->int32_t {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    i64 n , m;
    std::cin >> n >> m;

    std::string s, t;
    std::cin >> s >> t;

    i64 ans = 0;
    int k1 = s.length(), k2 = t.length();
    int g = std::gcd(k1, k2);
    constexpr int Kn = 26;
    for (int i = 0; i < g; i += 1) {
        std::array<int, Kn> cnt {};
        for (int j = i; j < k1; j += g) {
            cnt[s[j] - 'a'] += 1;
        }
        for (int j = i; j < k2; j += g) {
            ans += cnt[t[j] - 'a'];
        }
    }
    std::cout << (n * k1 - ans * std::gcd(n, m)) << '\n';
    return 0;
}
