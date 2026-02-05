#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = a + b + c;
    printf("%d+%d+%d=%d", a, b, c, d);
    return 0;
}
