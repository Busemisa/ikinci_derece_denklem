#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    printf("Lutfen a, b, c degerlerini giriniz: ");
    scanf("%d %d %d", &a, &b, &c);
    
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double sqrtDelta = sqrt(delta);
        double root1 = (-b + sqrtDelta) / (2 * a);
        double root2 = (-b - sqrtDelta) / (2 * a);

        printf("Kokler:\n");
        printf("Kok 1: %.2lf\n", root1);
        printf("Kok 2: %.2lf\n", root2);
    } else if (delta < 0) {
        printf("Kok yoktur.\n");
    } else { // delta == 0 durumu
        printf("Cakisik kok vardir, tek kok vardir:\n");
        double root = -b / (2 * a);
        printf("Kok: %.2lf\n", root);
    }

    return 0;
}

