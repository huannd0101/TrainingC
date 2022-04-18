#include<stdio.h>

int main() {
	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	
	//Kiem tra
	//Cach 1: if else
//	if(x == 1) {
//		printf("Day la so MOT");
//	} else if(x == 2) {
//		printf("Day la so HAI");
//	} else if(x == 3) {
//		printf("Day la so BA");
//	} else {
//		printf("Gia tri khong hop le");
//	}
	
	//Cach 2: switch case
	switch(x) {
		case 1: 
			printf("Day la so MOT");
			break;
		case 2: 
			printf("Day la so HAI");
			break;
		case 3: 
			printf("Day la so BA");
			break;
		default:
			printf("Gia tri khong hop le");
	}
	
	
}
