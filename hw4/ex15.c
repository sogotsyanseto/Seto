#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double x1, y1, x2, y2;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    // Проверка на вертикальную прямую
    if (fabs(x2 - x1) < 1e-12) {
        // Для вертикальной прямой K = бесконечность, уравнение x = x1
        // Но по условию нужно выводить K и B в формате y = Kx + B
        // В таком случае лучше вывести какое-то специальное значение
        printf("inf\n");  // Или другое решение по согласованию
    } else {
        double K = (y2 - y1) / (x2 - x1);
        double B = y1 - K * x1;
        printf("%.2f %.2f\n", K, B);
    }
    
    return 0;
}
