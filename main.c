#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y, z;
} Point;

double distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

double heron_area(Point a, Point b, Point c) {
    double ab = distance(a, b);
    double bc = distance(b, c);
    double ca = distance(c, a);
    double p = (ab + bc + ca) / 2.0;
    return sqrt(p * (p - ab) * (p - bc) * (p - ca));
}

int main() {
    system("chcp 65001");
    Point a, b, c;
    printf("Введіть координати першої точки (x y z): ");
    scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
    printf("Введіть координати другої точки (x y z): ");
    scanf("%lf %lf %lf", &b.x, &b.y, &b.z);
    printf("Введіть координати третьої точки (x y z): ");
    scanf("%lf %lf %lf", &c.x, &c.y, &c.z);
    double area = heron_area(a, b, c);
    printf("Площа трикутника: %.3f\n", area);

    return 0;
}