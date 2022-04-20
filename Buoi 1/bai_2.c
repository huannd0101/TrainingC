#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    if (n==1){
        printf("SUNDAY");
    }
    else if (n==2){
        printf("MONDAY");
    }
    else if (n==3){
        printf("TUESDAY");
    }
    else if (n==4){
        printf("WEDNESDAY");
    }
    else if (n==5){	
        printf("THURSDAY");
    }
    else if (n==6){
        printf("FRIDAY");
    }
    else if (n==7){
        printf("SATURDAY");
    } else printf ("INVALID NUMBER");

    return 0;
}
