#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    // Ввод трех чисел
    scanf("%d %d %d", &a, &b, &c);
    
    // Проверка строгого возрастания
    if (a < b && b < c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
