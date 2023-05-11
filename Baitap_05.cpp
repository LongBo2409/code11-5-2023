#include<stdio.h>
main(){
	float a , b, h;
	float s;
	printf("nhap vao canh day 1: ");
	scanf("%f", &a);
	printf("nhap vao canh day 2: ");
	scanf("%f", &b);
	printf("nhap vao chieu cao: ");
	scanf("%f", &h);
	s = ((a+b)*h)/2;
	printf("Dien tich hinh thang = %.2f", s);
	return 0;
}
