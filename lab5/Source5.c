#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
	// task_1();
	// task_2();
	homework();
	return 0;
}

int example() {
	setlocale(LC_CTYPE, "RUS");
	double x, y, res1, res2, res3, res4, res5, result;
	puts("введите x и y:");
	scanf("%lf %lf", &x, &y);
	res1 = 0.5 * y;
	res2 = pow(x, res1);
	res3 = sin(res2);
	res4 = y + 8e-4;
	res5 = pow(res4, 1 / 5.f);
	result = res3 + res5;
	printf("ответ:  %.3f\n", result);
	// или
	printf("ответ:  %.3f\n", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
	return 0;
}

int task_1() {
	setlocale(LC_CTYPE, "RUS");
	double gr, rad;
	puts("введите значение угла в градусах для вычисления sin этого угла:");
	scanf("%lf", &gr);
	rad = gr * M_PI / 180;
	printf("sin %g градусов = %.6f", gr, sin(rad));
	return 0;
}

// вариант 9
int task_2() {
	setlocale(LC_CTYPE, "RUS");
	const double k = 7.0;
	double x, y, a, b;
	puts("введите значения x:");
	scanf("%lf", &x);
	b = log10(fabs(k * x));
	printf("b = %f\n", b);
	a = pow(k + x, 3);
	printf("a = %g\n", a);
	y = pow(b, 2) + pow(fabs(a), 1 / 2.f);
	printf("y = %.3f\n", y);

	// задание 3*
	int A = (int)a, B = (int)b, C = (int)y;
	printf("A = %d, B = %d, C = %d\n", A, B, C);
	int res_a = (A % 2 == 0) ^ (B % 2 == 0);
	printf("a) если условие выполнено (1 - да, 0 - нет): %d\n", res_a);
	int res_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
	printf("б) если условие выполнено (1 - да, 0 - нет): %d", res_b);
	return 0;
}
// вариант 18
int homework() {
	setlocale(LC_CTYPE, "RUS");
	double x, y;
	const double a = 7.1e-9;
	printf("a = %g\n", a);
	puts("введите значения для x и y:");
	scanf("%lf %lf", &x, &y);
	double fxy = (cos(pow(x, 3) + 6) - sin(y - a)) / (log(pow(x, 4)) - 2 * pow(sin(x), 5));
	printf("f(x,y) = %f\n", fxy);
	return 0;
}
