#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <math.h>

//task1

void task2_1() {
    double x;
    printf("x = \n");
    scanf("%lf", &x);
    double y = cos(x);
    printf("%lf\n", y);
}

//task2

void task2_2() {
    double a, b;
    printf("a = , b = \n");
    scanf("%lf%lf", &a, &b);
    double h = hypot(a, b);
    printf("%lf\n", h);
}

//task3

void task2_3() {
    double a, b, c;
    printf("a = , b = , c = \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    double p = (a + b + c) / 2.;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%lf\n", s);
}

////task4
//double a(double x) {
//    double x2 = x * x;
//    return x2 * x2 + 2 * x2 + 1;
//}
//
//double b(double x) {
//    double x2 = x * x; // x^2
//    x += 1.; // x+1
//    return (x2 + x) * x2 + x; // (x^2 + x+1) * x^2 + x+1 = b(x)
//}
//
//double e(double x) {
//    x *= 2.; // 2x
//    double x2 = x * x; // 4x^2
//    x += 1.; // 2x+1
//    return (x2 + x) * x2 + x; // (4x^2 + 2x+1) * 4x^2 + 2x+1 = e(x)
//}
//

//double e_geometric(double x) {
//    // 16x^4 + 8x^3 + 4x^2 + 2x + 1 = sum  0 <= i <= 4  (2x)^i = ((2x)^5 - 1)/((2x) - 1)
//    x *= 2.;
//    double x2 = x * x;
//    return (x2 * x2 * x - 1.) / (x - 1.);
//}
//
//int main(void) {
//    double x;
//    scanf("%lf", &x);
//
//    // class variant
//    printf("a(x) = %lf\n", a(x));
//
//    // variant б
//    printf("b(x) = %lf\n", b(x));
//
//    // variant д (assigned to me)
//    printf("e(x) = %lf\n", e(x));
//    printf("e_geometric(x) = %lf\n", e_geometric(x));
//}

////task5
//double rosenbrock2d(double x, double y) {
//    double t1 = x * x - y;
//    double t2 = x - 1.;
//    return 100. * t1 * t1 + t2 * t2;
//}
//
//int main(void) {
//    printf("%lf\n", rosenbrock2d(0., 1.));
//    printf("%lf\n", rosenbrock2d(1., 1.));
//    printf("%lf\n", rosenbrock2d(1., 0.));
//}

////task6
//double triangle_area(double a_x, double a_y, double b_x, double b_y, double c_x, double c_y) {
//    double ab_x = b_x - a_x;
//    double ab_y = b_y - a_y;
//    double ac_x = c_x - a_x;
//    double ac_y = c_y - a_y;
//
//    double area = fabs(ab_x * ac_y - ac_x * ab_y) * 0.5;
//
//    return area;
//}
//
//double vector_length(double x, double y) {
//    return hypot(x, y);
//}
//
//double triangle_area_herone(double a_x, double a_y, double b_x, double b_y, double c_x, double c_y) {
//    double ab_x = b_x - a_x;
//    double ab_y = b_y - a_y;
//    double ac_x = c_x - a_x;
//    double ac_y = c_y - a_y;
//    double bc_x = c_x - b_x;
//    double bc_y = c_y - b_y;
//
//    double ab_len = vector_length(ab_x, ab_y);
//    double ac_len = vector_length(ac_x, ac_y);
//    double bc_len = vector_length(bc_x, bc_y);
//
//    double p = (ab_len + ac_len + bc_len) * 0.5;
//
//    double area = sqrt(p * (p - ab_len) * (p - ac_len) * (p - bc_len));
//
//    return area;
//}
//
//int main(void) {
//    double x1, x2, x3;
//    double y1, y2, y3;
//    scanf("%lf %lf", &x1, &y1);
//    scanf("%lf %lf", &x2, &y2);
//    scanf("%lf %lf", &x3, &y3);
//
//    printf("area: %lf\n", triangle_area(x1, y1, x2, y2, x3, y3));
//    printf("area_herone: %lf\n", triangle_area_herone(x1, y1, x2, y2, x3, y3));
//}

//task11
void task2_11(){
    double r,h;
    double S,V;
    double p = M_PI;
    printf("r = , h = \n");
    scanf("%lf %lf", &r,&h);
    S = p*r*r;
    V = h*S;
    printf("V = %lf", V);
}

void task2_17(){
    double x,gauss, gauss_derivative;
    double e = M_E;
    scanf("%lf",&x);
    gauss = pow(e,(-(x*x)));
    gauss_derivative = ((-2)*x)/pow(e,(-(x*x)));

    printf("gauss(%lf) = %lf\n", x, gauss);
    printf("gauss_derivative(%lf) = %lf\n", x , gauss_derivative);
}

int main() {
    task2_17();
}