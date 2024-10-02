#include<stdio.h>

int main(void){
	int input_seconds, weeks, days, hours, minutes, seconds;
	
	printf("Enter seconds : ");
	scanf("%d", &input_seconds);

	seconds = input_seconds;
	minutes=seconds/60;
	hours=minutes/60;
	days=hours/24;
	weeks=days/7;

	printf("%d weeks, %d days, %d hours, %d minutes, %d seconds\n", 
			weeks, days, hours, minutes, seconds);
	return 0;
}
