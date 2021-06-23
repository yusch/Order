#include "gcd.h"
int gcd(int a, int b) {
    //int a = 2;
    //int b = 323;
    int r, tmp;

    //a > bの状態に変換
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }

    // ユークリッドの互除法
    r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }

    //
    //printf("gcd = %d\n", b);

    return b;
}