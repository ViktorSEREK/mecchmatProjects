#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <math.h>

//task1

void task1_1() {
    printf("%d ", 2 + 31);
    printf("%d ", 45 * 54 - 11);
    printf("%d ", 15 / 4);
    printf("%f ", 15.0 / 4);
    printf("%d ", 67 % 5);
    printf("%f ", (2 * 45.1 + 3.2) / 2);
}

//task2

void task1_2() {
    double a = 1e-4;
    double b = 24.33e5;
    double c = M_PI;
    double d = M_E;
    double e = sqrt(5.);
    double f = log(100.);

    printf("%.2lf ", a);
    printf("%.2lf ", b);
    printf("%.2lf ", c);
    printf("%.2lf ", d);
    printf("%.2lf ", e);
    printf("%.2lf ", f);
}

//task3

void task1_3(){
    char a;
    printf("a = ");
    scanf("%c", &a);

    printf(
            "- %c - %c - %c\n"
            "%c | %c | %c\n"
            "- %c - %c - %c\n",
            a,a,a,a,a,a,a,a,a
    );
}

//task4

void task1_4(){
    const long double m1 = 42e3;
    const long double m2 = 26e3;
    const long double y = 6.673e-11L;
    const long double r = 15.;
    long double F = y*m1*m2/(r*r);

    printf("F = %Le\n", F);
}

//task5

void task1_5() {
    const float x = 1.5;

    //a)
    float a0 = x * x; // x^2
    float A = a0 * a0;  // x^4

    //b)
    float b0 = x * x; // x^2
    float B = b0 * b0 * b0;  // x^6

    //c)
    float c0 = x * x * x; // x^3
    float C = c0 * c0 * c0;  // x^9

    //d)
    float d0 = x * x; // x^2
    float d1 = d0 * d0 * x; // x^5
    float D = d1 * d1 * d1; // x^15

    //e)
    float e0 = x * x; // x^2
    float e1 = e0 * e0 * e0 * x; // x^7
    float e2 = e1 * e1; // x^14
    float E = e2 * e2; // x^28

    //f)
    float f0 = x * x; // x^2
    float f1 = f0 * f0;
    float f2 = f1 * f1; // x^8
    float f3 = f2 * f2;
    float f4 = f3 * f3;
    float F = f4 * f4; // x^64

    printf("x = %f\n"
           "a) x^4=%f\nb) x^6=%f\nc) x^9=%f\nd) x^15=%f\ne) x^28=%f\nf) x^64=%f\n",
           x, A, B, C, D, E, F
    );
}

//task6

void task1_6() {
    float C;
    printf("C': ");
    scanf("%f", &C);
    float F = C * 9.f / 5.f + 32.f;
    printf("F': %g", F);
}

//task7

void task1_7() {
    float x;
    printf("x = ");
    scanf("%f", &x);

    //without modff
    float X1 = (float)(int)x, fract1 = x - X1;

    //with modff
    float X2, fract2 = modff(x, &X2);

    printf("A1: %f B1: %f\n", X1, fract1);
    printf("A2: %f B2: %f\n", X2, fract2);
}

//task8

void task1_8() {
    float a, b;
    printf("ab = \n");
    scanf("%f%f", &a, &b);
    printf("a-b = %.2f\na*b = %.2f\n", a - b, a * b);
}

//task9

void task1_9() {
    float a, b;
    printf("a , b = ");
    scanf("%f %f", &a, &b);
    float S = (a+b)/2.;
    float h = 2./(1./a+1./b);

    printf("av = %f\nh = %f\n", S, h);

    printf("\nav = %e\nh = %e\n", S, h);
}

//task10

void task1_10(){
    int integers[] = {1, 2, 3, 4, 5};
    float floats[] = {3.0, 1.0, 5.0, 4.0, 2.1};

    printf("x | ");
    for (int i = 0; i < 5; i++) {
        printf("%d | ", integers[i]);
    }
    printf("\n");

    printf("- | ");
    for (int i = 0; i < 5; i++) {
        printf("- - | ");
    }
    printf("\n");

    printf("y | ");
    for (int i = 0; i < 5; i++) {
        printf("%.1f | ", floats[i]);
    }
    printf("\n");

}

//task17

void task1_17() {
    long double x;
    // 0 <= x <= 1e4
    scanf("%Lf", &x);

    long double y = x * x; //x^2
    y *= y; // x^4
    y *= y; // x^8
    printf("%025.4Lf", y);
}

int main() {
    task1_17();
}
