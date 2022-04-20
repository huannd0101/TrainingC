#include<stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
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
    if (d!=a){
        dem++;
    }
    if (dem > 2 ){
        printf("HIGH CARD");
    } else{
        printf("FOUR OF A KIND");
    }

	return 0;
}
