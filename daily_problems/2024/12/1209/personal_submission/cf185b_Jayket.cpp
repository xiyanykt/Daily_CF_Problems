#include<bits/stdc++.h>
using i64 = long long;

auto main() ->int32_t {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int S;
    std::cin >> S;

    int a, b, c;
    std::cin >> a >> b >> c;

    int r = a + b + c;
    if (r == 0) {
        std::cout << std::format("0.0 0.0 0.0\n");
    } else {
        std::cout << std::format("{} {} {}\n", double(a) * S / r, double(b) * S / r, double(c) * S / r);
    }
    return 0;
}
