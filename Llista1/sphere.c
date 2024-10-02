#include<stdio.h>

#define PI 3.141592

int main(void){
	double r, area, volume;

	printf("Enter Radius : ");
	scanf("%lf", &r);

	area=4 * PI * r * r;
	volume=4./3.*PI*r*r*r;

	printf("The area of sphere : %f\n", area);
	printf("The Volume of sphere : %f\n", volume);

	return 0;
}
