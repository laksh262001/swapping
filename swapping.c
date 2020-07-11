/*Swapping*/
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping:a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:a=%d and b=%d\n",a,b);
}
