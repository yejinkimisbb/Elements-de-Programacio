#include<stdio.h>

int main(void){

	int input=0;
	printf("Enter number : ");
	scanf("%d", &input);
	
	if(input/10==0) {printf("This is Un Digit\n");}
	else {printf("This is not Un Digit\n");}	
	return 0;
}
