//Write a Program to find an average mark from a total of three subject marks of a
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,avg,total;
	printf("enter maths marks :");
	scanf("%d",&a);
	printf("enter sci marks:");
	scanf("%d",&b);
	printf("enter eng marks :");
	scanf("%d",&c);
	total=a+b+c;
	avg=total/3;
	printf("enter avg :%d\n",avg);
	if(avg>=90 && avg<100)
	{
		printf("a+");
	}
	else if(avg>80 && avg<90)
	{
		printf("a");
	}
	else if(avg>70 && avg<80)
	{
		printf("b+");
	}
	else if(avg>60 && avg<70)
	{
		printf("b");
	}
	else if(avg>50 && avg<60)
	{
		printf("c");
	}
	else if(avg>40 && avg<50)
	{
		printf("d");
	}
	else if (avg<30)
	{
	printf("you are failed");
	}
 	return 0;
	
}

 	

