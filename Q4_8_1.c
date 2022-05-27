#include <stdio.h> 
double square(double x) {
    printf("1 ");
    return x * x;
}

double cube(double x) {
    printf("2 ");
    return x * square(x);
}

double pi(double x) {
    printf("3 ");
    return 3.14 * x;
}

double sphere(double r) {
    printf("4 ");
    return 4.0 / 3.0 * pi(cube(r));
}

int main(void) {
    double radius = 1.5;
    double volume;

    volume = sphere(radius);
    return 0;
}