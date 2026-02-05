#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c, d, e;
    scanf("%d", &a);
    b = a % 10;
    c = a / 100;
    d = (a / 10) % 10;
    e = b + c + d;
    printf("%d", e);
    
}
