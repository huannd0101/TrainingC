#include <stdio.h>
#include<math.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int firstMax, secondMax; //gan max va max2
    
    if(a > b) {
    	firstMax = a;
    	secondMax = b;
	} else {
		firstMax = b;
    	secondMax = a;
	}
	
	if(firstMax <= c) {
		if(secondMax < c) {
			secondMax = firstMax;
		}
		firstMax = c;
	} else {
		if(secondMax < c) {
			secondMax = c;
		}
	}
	
	if(firstMax <= d) {
		if(secondMax < d) {
			secondMax = firstMax;
		}
		firstMax = d;
	} else {
		if(secondMax < d) {
			secondMax = d;
		}
	}
	
   	printf("%d", secondMax);

    return 0;
}

