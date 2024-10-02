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

	if(small2<=small1 && big1 <=big2){printf("Group 1 is included in Group2\n");}
	else if(small1<=small2 && big2 <=big1){printf("Group2 is included in Group1\n");}
	else { printf("Group1 and Group2 are not included each other\n");}
	return 0;
}
	
