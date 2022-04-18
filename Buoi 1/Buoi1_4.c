#include<stdio.h>

int main() {
	int a, b, c, d;
	int max, min;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	//Tim max
	//(a, b)
	if(a > b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	if(min > c) {
		min = c;
	} 
	//(a, b, c, d)
	if(min > d) {
		min = d;
	}
	//(a, b, c)
	if(max < c) {
		max = c;
	} 
	//(a, b, c, d)
	if(max < d) {
		max = d;
	}
	
	printf("%d %d", min, max);
	
	return 0;
}
