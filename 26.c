//Write a Program to find if a given number is neutral or not using a ladder if else.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter the value of num");
	scanf("%d",&num);
	if(num==0)
	{
		printf("num is neutral !");
	}
	else if(num>0)
	{
		printf("num is positive !");
	}
	else if(num<0)
	{
		printf("num is negative !");
	}
	return 0;
	
}
