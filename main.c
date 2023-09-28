#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	
	printf("input the year : ");
	scanf("%i", &a);

	if ( (a%4==0 && a%100!=0) || (a%400==0) )
	{
		printf("is the year %i the leap year? : 1 \n", a);
	}
	else
	{
		printf("is the year %i the leap year? : 0 \n", a);
	}
	
	return 0;
}
