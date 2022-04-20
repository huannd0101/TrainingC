#include <stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
    float delta = b*b-4*a*c;
    
    if (a==0 && b==0 && c==0){
        printf("EQUATION HAS INFINITELY MANY SOLUTIONS");
    }
    
    else if (a==0 && b==0){
        printf("EQUATION HAS NO SOLUTIONS");
    } else {
        if (delta < 0){
            printf("EQUATION HAS NO SOLUTIONS");
        } else{
            float x1, x2;
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            if (x1>x2){
                printf("%.5f\n", x2);
                printf("%.5f\n", x1);
            } else{
                printf("%.5f\n", x1);
                printf("%.5f\n", x2);
            }
        }
    }

    return 0;
}


