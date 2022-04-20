#include <stdio.h>

int main(){
    int x, i;
    scanf("%d", &x);
    
    int ok = 0; //kiem tra xem x co phai la so chinh phuong khong
    for (i=1; i<=x; i++){
        if (i*i == x){
            ok = 1; //so chinh phuong la so can bac 2 cua 1 so nguyen la mot so nguyen
            printf("YES");
            break;
        }
    }
    if (ok == 0){
        printf("NO");
    }

    return 0;
}

