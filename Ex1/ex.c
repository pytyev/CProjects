#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]) {
	double x, y;
	scanf("%lf%lf", &x, &y);
	printf("%.3lf", x * y);
	return 0;
}