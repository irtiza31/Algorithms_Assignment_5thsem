//program to find factorial of a number

#include<stdio.h>

int main()
{
	 int n,i,fact=1;
	 printf("please enter the number");
	 scanf("%d",&n);
	 
	 for(i=n;i>=1;i--)
		{  
		  fact=fact*i;
		}
		
		printf("the factorial is %d ",fact);
}
