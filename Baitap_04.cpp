#include<stdio.h>
main(){
	float C, F;
	printf("Nhap vao do C: ");
	scanf ("%f", &C);
	F = (9*C+160)/5;
	printf("Do F quy doi la: %.1f", F);
	return 0;
}
