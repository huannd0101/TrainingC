#include<stdio.h>
#include<stdlib.h>

int main() {
	/*
		Cap phat bo nho dong
		1. malloc
		2. calloc
	*/
	
	int n = 5, i;
//	int a[n];
	int *a;
	a = (int*)malloc(n * sizeof(int));

//	a = (int*)calloc(n, sizeof(int));

	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
		scanf("%d", (a+i));
	}
	
	for(i=0; i<n; i++) {
//		printf("%d ", a[i]);
		printf("%d ", *(a+i));
	}
		

	return 0;
}
