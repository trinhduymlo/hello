#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	int sum;
	printf ("nhap num1 :\n");
	scanf ("%d", &num1);
	printf ("nhap num2 :\n");
	scanf ("%d", &num2);
	sum= num1 + num2;
	printf ("bang tong: %d", sum);
	return 0;
}
