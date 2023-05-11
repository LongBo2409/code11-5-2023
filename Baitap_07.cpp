#include<stdio.h>
main(){
	float r, chv, cd, cr;
	float p01, s01, p02, s02, p03, s03;
	// Tinh chu vi va dien tich hinh tron
	printf("\nNhap vao ban kinh hinh tron: ");
	scanf ("%f", &r);
	p01 = r * 2 * 3.14;
	s01 = r * r * 3.14;
	printf("\nChu vi hinh tron = %.2f", p01);
	printf("\nDien tich hinh tron = %.2f\n", s01);
	// Tinh chu vi va dien tich hinh vuong
	printf("\nNhap vao canh hinh vuong: ");
	scanf("%f", &chv);
	p02 = chv * 4;
	s02 = chv * chv;
	printf("\nChu vi hinh vuong = %.2f", p02);
	printf("\nDien tich hinh vuong = %.2f\n", s02);
	//Tinh chu vi va dien tich hinh chu nhat
	printf("\nNhap vao chieu dai hinh chu nhat: ");
	scanf("%f", &cd);
	printf("\nNhap vao chieu rong hinh chu nhat: ");
	scanf("%f", &cr);
	p03 = (cd + cr) * 2;
	s03 = cd * cr;
	printf("\nChu vi hinh chu nhat = %.2f", p03);
	printf("\nDien tich hinh chu nhat = %.2f", s03);
	return 3;
	
}
