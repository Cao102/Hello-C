#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

// Hàm tính lũy thừa cơ số base mũ exp theo modulo mod
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Hàm đếm số chuỗi tốt có độ dài n
long long count_good_strings(long long n) {
    long long even_positions = (n + 1) / 2; // ceil(n / 2)
    long long odd_positions = n / 2;        // floor(n / 2)

    long long even_count = mod_exp(5, even_positions, MOD);
    long long odd_count = mod_exp(4, odd_positions, MOD);

    return (even_count * odd_count) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        long long result = count_good_strings(n);
        cout << result << '\n';
    }

    return 0;
}