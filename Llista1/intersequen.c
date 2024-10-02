#include<stdio.h>

int main(void){
	
	int x0, x1, x2, x3, small1, big1, small2, big2;
	printf("Enter x0 : ");
	scanf("%d", &x0);
	printf("Enter x1 : ");
	scanf("%d", &x1);
	printf("Enter x2 : ");
	scanf("%d", &x2);
	printf("Enter x3 : ");
	scanf("%d", &x3);
	
	small1=x0;
	big1=x1;
	small2=x2;
	big2=x3;
	if(x0>x1){small1=x1, big1=x0;}
	if(x2>x3){small2=x3, big2=x2;}

	if(big1 < small2 || big2 < small1) {printf("No intersequen\n");}

	return 0;
}
	
