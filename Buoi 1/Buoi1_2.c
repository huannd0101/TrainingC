#include<stdio.h>

int main() {
	int a, b; // khai bao bien
	printf("Nhap a = "); //Xuat thong bao nhap
	scanf("%d", &a); //nhap gia tri bien a
	printf("Nhap b = "); //Xuat thong bao nhap
	scanf("%d", &b); //nhap gia tri bien b
	
	if(a > b) { //kiem tra a > b
		printf("a lon hon b");
	} else if(a < b) { // kiem tra a < b
		printf("a nho hon b");
	} else { // bat case a == b
		printf("a bang b");
	}
	
	return 0;
}
