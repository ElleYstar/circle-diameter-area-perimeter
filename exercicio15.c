#include <stdio.h>
int main() {
    float r, d, a, p;
    scanf("%f", &r);

    d = 2 * r;
    a = 3.14159 * (r * r);
    p = 2 * 3.14159 * r;

    printf("%.2f\n", d);
    printf("%.2f\n", a);
    printf("%.2f\n", p);

    return 0;
    
}