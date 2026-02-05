#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d%d", &a, &b);
    if (a > b) {
        printf("Above\n");
    }
    else if(a < b) {
        printf("Less\n");
    }
    else if(a == b){
        printf("Equal\n");
    }
    return 0;
}
