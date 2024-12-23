#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]) {
	int octal;
	char capbot[] = "--------------------------------";
	char* system_column[] = {"десятичная", "восьмеричная", "шестнадцатеричная"};
	char* formatspec[] = { "%c %-17s%c%-10d %c\n", "%c %-17s%c%-10o %c\n", "%c %-17s%c%-10x %c\n" };
	char column = '|';
	int i;

	scanf("%o", &octal);
	printf("%s\n",capbot);
	for (i = 0;i < 3;i++) {
		printf(formatspec[i], column, system_column[i], column, octal, column);
		//printf("%c %-17s%c%-10o %c\n", column, system_column[1], column, octal, column);
		//printf("%c %-17s%c%-10x %c\n", column, system_column[2], column, octal, column);
	}
	printf("%s\n", capbot);
	return 0;
}