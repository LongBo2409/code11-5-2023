#include <stdio.h>
#include <conio.h>
main(){
	int num1, num2;
	int Tong, Hieu, Tich, Thuong;
	printf ("Nhap so num1 = ");
	scanf ("%d",&num1);
	printf ("Nhap so num2 = ");
	scanf ("%d",&num2);
	Tong = num1 + num2;
	printf ("\nTong = %d", Tong);
	Hieu = num1 - num2;
	printf ("\nHieu = %d", Hieu);
	Tich = num1 * num2;
	printf ("\nTich = %d", Tich);
	Thuong = num1 / num2;
	printf ("\nThuong = %d", Thuong);
	getch();
}
