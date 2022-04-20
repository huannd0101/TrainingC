#include<stdio.h>

int main() {
	int a = 10;
	
	//Khai bao con tro: Them dau * de biet la con tro
	//Con tro: luu dia chi o nho cua mot bien nao day
	//Toan tu &: toan tu lay dia chi o nho
	//Toan tu *: lay gia tri cua o nho ma con tro dang tro toi
	int *ptr = &a;
	
	printf("a = %d\n", a);
	printf("ptr = %d\n", *ptr);
	
	a = 15;
	printf("a = %d\n", a);
	printf("ptr = %d\n", *ptr);
	
	*ptr = 99;
	printf("a = %d\n", a);
	printf("ptr = %d\n", *ptr);
	
	
	return 0;
}
