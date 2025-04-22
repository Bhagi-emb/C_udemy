#include <stdio.h>

int max_of_four(int a,int b,int c,int d)
{
    int max;
    max = a>b?a:b;
    max = max >c? max:c;
    max = max > d? max:d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/*
Input Format

Input will contain four integers -  , one on each line.

Output Format

Print the greatest of the four integers.
Note: I/O will be automatically handled.
*/