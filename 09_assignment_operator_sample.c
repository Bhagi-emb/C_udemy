/*
assignment_operator_sample.c
*/
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    int f = 60;
    int g = 70;
    int h = 80;
    int i = 90;
    int j = 100;
    // int k = 110;
    // int l = 120;
    // int m = 130;
    // int n = 140;
    // int o = 150;
    // int p = 160;
    // int q = 170;
    // int r = 180;
    // int s = 190;
    // int t = 200;
    // int u = 210;
    // int v = 220;
    // int w = 230;
    // int x = 240;
    // int y = 250;
    // int z = 260;
    a += 10;
    b -= 10;
    c *= 10;
    d /= 10;
    e %= 10;
    f &= 10;
    g |= 10;
    h ^= 10;
    i <<= 10;
    j >>= 10;
    // k += 10;
    // l -= 10;
    // m *= 10;
    // n /= 10;
    // o %= 10;
    // p &= 10;
    // q |= 10;
    // r ^= 10;
    // s <<= 10;
    // t >>= 10;
    // u += 10;
    // v -= 10;
    // w *= 10;
    // x /= 10;
    // y %= 10;
    // z &= 10;
    printf("a-10+=10 %d\n", a);
    printf("b-20-=10 %d\n", b);
    printf("c-30*=10 %d\n", c);
    printf("d-40/=10 %d\n", d);
    printf("e-50%%=10 %d\n",e);
    
    printf("f-60&=10 %d\n", f); // 60 = 0011 1100 & 10 = 0000 1010 :: res: 0000 1000->8
    printf("g-70|=10 %d\n", g);// 70 = 0100 0110 | 10 = 0000 1010 :: res: 0100 1110 -> 78
    printf("h-80^=10 %d\n", h);// 80 = 0101 0000 ^ 10 = 0000 1010 :: res: 0101 1010 -> 90
    
    printf("i-90<<=10 %d\n", i);// 90 = 0000 0000 0000 0101 1010 (lsh) << 10 :: res: 0001 0110 1000 0000 0000 -> 92160
    // check calulation 2^64 for clear : pushing left side 10 times 
    printf("j-100>>=10 %d\n", j);// 100 = 0110 0100 >>(rsh) 10 :: res: 0
    //when you push right side 10 times it will be 0

    // printf("k = %d\n", k);
    // printf("l = %d\n", l);
    // printf("m = %d\n", m);
    // printf("n = %d\n", n);
    // printf("o = %d\n", o);
    // printf("p = %d\n", p);
    // printf("q = %d\n", q);
    // printf("r = %d\n", r);
    // printf("s = %d\n", s);
    // printf("t = %d\n", t);
    // printf("u = %d\n", u);
    // printf("v = %d\n", v);
    // printf("w = %d\n", w);
    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("z = %d\n", z);
    return 0;
}