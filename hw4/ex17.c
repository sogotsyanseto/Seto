#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    scanf("%d", &a);
    if (a < 3 || a == 12) {
        printf("winter\n");
    }
    else if(a < 6 ) {
        printf("spring\n");
    }
    else if(a < 9){
        printf("summer\n");
    }
    else if (a < 12){
        printf("autumn\n");
    }
    return 0;
}
