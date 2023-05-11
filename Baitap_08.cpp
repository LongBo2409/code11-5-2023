#include<stdio.h>
#include<conio.h>
main(){
	int a = 15;
	float b = 3.456;
	double c = 3.4567;
	char d = 'v';
	long int e  ;
	long double f ;
	printf("a = %d\t sizeof int in %d byte\n", a, sizeof(int));
	printf("e = %d\t sizeof int in %d byte\n", e, sizeof(long int));
	printf("d is %c\t sizeof char is %d byte\n", d, sizeof(char));
	printf("b = %.2f\t sizeof float is %d byte\n", b, sizeof(float));
	printf("c = %f\t sizeof double is %d byte\n", c, sizeof(double));
	printf("f = %f\t sizeof double is %d byte\n", f, sizeof(long double));
	getch();
}
