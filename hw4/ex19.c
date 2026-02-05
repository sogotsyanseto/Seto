#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b && a > c && a < b + c) || ((a == b)  && (b == c))) {
        printf("YES\n");
    }
    else if ((b > a && b > c && b < a + c) || ((a == b)  && (b == c))){
        printf("YES\n");
    }
    else if ((c > a && c > b && c < a + b) || ((a == b)  && (b == c))) {
        printf("YES\n");
    }
    else{
        printf("NO");
    }
    return 0;
}
