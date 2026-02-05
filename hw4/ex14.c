#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, a1, a2, a3;
    scanf("%d", &a);
    a1 = a / 100;
    a2 = (a / 10) % 10;
    a3 = a % 10;
    //printf("%d\n", a1);
    //printf("%d\n", a2);
    //printf("%d\n", a3);
    if (a1 >= a2 && a1 >= a3){
        printf("%d", a1);
    }
    else if (a2 >= a1 && a2 >= a3){
        printf("%d", a2);
    }
    else{
        printf("%d", a3);
    }
    return 0;
}

