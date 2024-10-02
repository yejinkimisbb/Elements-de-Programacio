#include<stdio.h>

int main(){

	int n0, n1, n2, max;

	printf("Enter 3 numbers. and I will find the maximum number!\n");
	printf("Enter n0 : ");
	scanf("%d", &n0);
	printf("Enter n1 : ");
	scanf("%d", &n1);
	printf("Enter n2 : ");
	scanf("%d", &n2);
	
	max=n0;
	if(max<n1)max=n1;
	if(max<n2)max=n2;

	printf("The maximum number : %d\n", max);

	return 0;
}
