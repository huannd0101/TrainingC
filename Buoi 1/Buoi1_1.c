#include<stdio.h>


int main() {
	//in thông tin ra man hinh
	//\n: xuong dong
	//&a: lay dia chi o nho
	/*
		%d: xuat so nguyen
		%f: Xuat so thuc
		%.2f: Xuat so thuc lay 2 so sau dau phay
		%c: xuat ki tu
	*/
	
//	printf("Hoc C\n"); //in chuoi
//	printf("%d\n", 10); //in so nguyen
//	printf("%d %d\n", 10, 20); //xuat theo thu tu
//	printf("%.3f\n", 10.0);
//	
//	printf("%c", 'ccccc');
	
	// Khai bao du lieu
	//So nguyen: int, long
//	int a; //mac dinh = 1
//	int b = 10;
//	long c = 10;
//	printf("%d, %d\n", a, b);
//	//So thuc: float, double
//	float d = 10.0;
//	double f = 10.6;
//	printf("%.2f\n", d);
//	//ki tu: char
//	char g = 'h';
//	printf("%c", g);
	
//	int a = 10 - 5;
//	int b = 10 + 5;
//	int c = 10 * 2;
//	int d = 10 / 2;
//	int f = 10 % 2; //=0
//	int c = a + b; //20
//	printf("%d, %d", a + b, 10000);
	
	//Nhap du lieu cho bien
//	int a;
//	scanf("%d", &a);
//	
//	float b;
//	scanf("%f", &b);
//	
//	printf("%d\n", a);
//	printf("%f\n", b);
	
	
	//Hang: khong thay doi duoc gia tri
	const int MAX_VALUE = 10;
	
	//if else

	/*
		Cau tru if else: 
		if(dieu_kien) {
			//code - Neu dieu_kien dung (dieu_kien = true)
		} else {
			//code - Neu dieu_kien sai (dieu_kien = false)
		}
	*/
	/*
		Toan tu so sanh: tra ve true/false
		>, <, >=, <=, ==, !(phu dinh), !=
	*/
//	int a = 10;
//	
//	if(a >= 10) {
//		printf("10000");
//	} else {
//		printf("-1");
//	}
	
	// if else long nhau
	/*
		&&: yeu cau ca 2 dieu kien deu la true
		||: yeu cau 1 trong 2 dieu kien la true
	*/
//	int a = 11;
//	// neu a > 100 và a la so le thi in ra "true" nguoc lai in ra "false"
//	if(a > 100 && a % 2 == 1) { // kiem tra so > 100
//		printf("true");
//	} else {
//		printf("false");
//	}
	
	// switch case
	/*
		Cau truc
		switch(gia_tri || bien) {
			case gia_tri:
				//khoi code logic.....
				break;
			case gia_tri:
				//khoi code logic.....
				break;
			default:
				//khoi code logic.....
		}
	*/
//	int a = 10;
//	
//	switch(a) {
//		case 1:
//			printf("1\n");
//			break;	
//		case 2:
//			printf("2\n");
//			break;
//		case 3:
//			printf("3\n");
//			break;
//		default:
//			printf("Mac dinh")
//	}

	/*
		- Tac dung: thuc thi cong giong nhau nhieu lan
		1. For
		for(khoi_tao; dieu_kien; buoc_nhay) {
			//block
		}
		2. While
		3. Do while
	*/
	
	int a = 2, b = 5;
//	a++; // a = a + 1
//	a--; // a = a - 1
//	++a;
//	--a;
//			1		6: 
//	Dat toan tu phia truoc thi se thuc thi truoc sau do moi thuc thi bieu thuc
	
//	int c = --a + b++;
//	printf("%d\n", c);
//	printf("%d\n", a);
//	printf("%d\n", b);
	
	
	int i;
	for(i=1; i<=10; i++) {
		if(i % 2 == 0) {
			continue; // bo qua code ben duoi va thuc thi lai vong lap moi
		}
		printf("Hello %d\n", i);
		
//		if(i == 5) {
//			break; //tac dung dung lai vong lap
//		}
	}
	
//	i=1; 1<=3(true) => in ra man hinh; i++ => i=2
//	i=2; 2<=3(true) => in ra man hinh; i++ => i=3
//	i=3; 3<=3(true) => in ra man hinh; i++ => i=4
//	i=4; 4<=3(false) => dung lai vong lap
	
	
	
	return 0; 
}
