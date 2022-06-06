#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int i;
	double d;
	float f;
	double result;
	printf("nhap vao ky tu ch: ");
	scanf("%c", &ch);
	printf("nhap vao ky tu i: ");
	scanf("%d", &i);
	printf("nhap vao ky tu f: ");
	scanf("%f", &f);
	printf("nhap vao ky tu d: ");
	scanf("%1f", &d);
	result = (ch/i) + (f*d) - (f+i);
	printf("ket qua: %.2lf", result);
	return 0;
}
