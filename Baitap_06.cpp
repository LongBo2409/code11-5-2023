#include<stdio.h>
main(){
	float a,b,c;
	float dtb;
	printf("Nhap vao diem toan: ");
	scanf("%f", &a);
	printf("Nhap vao diem ly: ");
	scanf("%f", &b);
	printf("Nhap vao diem hoa: ");
	scanf("%f", &c);
	dtb = (a + b + c)/3;
	printf("Diem trung binh 3 mon = %.1f", dtb);
	return 0;
}
