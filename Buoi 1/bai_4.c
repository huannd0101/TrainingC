#include <stdio.h>
#include<math.h>
int main(){

    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    /*
    	1. Cac canh lon hon 0
		2. Tong 2 canh bat ki lon hon canh con lai
		3. Hieu 2 canh bat ki nho hon canh con lai
	*/
    if (a>0 && b>0 && c>0 
		&& a+b > c && a+c > b && c+b>a 
		&& abs(a-b) < c && abs(a-c) < b && abs(c-b) < a){
        printf("YES");
    } else {
    	printf("NO");
	}

    return 0;
}
