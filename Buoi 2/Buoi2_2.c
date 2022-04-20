#include<stdio.h>

int main() {
	/*
		kieu_du_lieu ten_mang[so_luong_phan_tu];
		index mang bat dau tu 0
		luu gia tri cac phan tu lien ke nhau
	*/
	
	int a[10];
	
//	a[0] = 10;
//	a[1] = 88; 
//	
//	printf("%d\n", a[0]);
//	printf("%d\n", a[1]);

	int i;
	for(i=0; i<5; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
	
	for(i=0; i<5; i++) {
		printf("%d ", a[i]);
	}
	
	printf("\n");
	
	//Tinh tong cac phan tu trong mang
	int s = 0;
	for(i=0; i<5; i++) {
		s = s + a[i];
		//s += a[i];
	}
	printf("Tong = %d\n", s);
	
	//Tim max, min
	int max = a[0];
	int min = a[0];
	//Tim max
	for(i=1; i<5; i++) {
		if(max < a[i]) {
			max = a[i];
		}
	}
	
	//Tim min
	for(i=1; i<5; i++) {
		if(min > a[i]) {
			min = a[i];
		}
	}
	
	printf("Max = %d\n", max);
	
	printf("Min = %d\n", min);
	
	
	return 0;
}
