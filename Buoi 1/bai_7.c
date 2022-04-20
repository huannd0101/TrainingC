#include<stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    //Bat TH khac nhau cua 2 so lien ke
    //Neu co lon hon 2 TH khac nhau thi se khong ton tai 4 chu so bang nhau
    int dem=0;
    if (a!=b){
        dem++;
    }
    if (b!=c){
        dem++;
    }
    if (c!=d){
        dem++;
    }
    if (d!=e){
        dem++;
    }
    if (e!=a){
        dem++;
    }
    if (dem > 2){
        printf("HIGH CARD");
    } else{
        printf("FOUR OF A KIND");
    }

	return 0;
}
