#include<stdio.h>

int main(void){
	int input_sec = 0, weeks=0, days=0, hours=0, minutes=0, seconds=0;
	
	printf("Enter Seconds : ");
	scanf("%d", &input_sec);

	seconds = input_sec;
	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;
	weeks = days / 7;

	printf("%d weeks, %d days, %d hours, %d minutes, %d seconds\n", 
			weeks, days, hours, minutes, seconds);
	return 0;
}

