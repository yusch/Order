#include <stdio.h>

// a^n mod を計算する
long long modpow(long long y, long long a, long long mod) {
    long long result = 1;
    while (a > 0) {
        if (a & 1) result = result * y % mod;
        y = y * y % mod;
        a >>= 1;
    }
    return result;
}