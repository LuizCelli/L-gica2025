#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


int main() {
    double a, b, c;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double s = (a + b + c) / 2.0;

        double A = sqrt(s * (s - a) * (s - b) * (s - c));

        double r = A / s;

        double R = (a * b * c) / (4.0 * A);

        double area_rosas = M_PI * r * r;
        double area_total = A;
        double area_violetas = area_total - area_rosas;
        double area_girassois = M_PI * R * R - area_total;

        printf("%.4lf %.4lf %.4lf\n", area_girassois, area_violetas, area_rosas);
    }

    return 0;
}
