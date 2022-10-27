#include<stdio.h>

int main()
{
    int  a,b;
	
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("\n Enter the second value:");
	scanf("%d",&b);
	
	a+=b;
	b-=a;
	a-=b;
	
	printf("\n value after swping:");
	printf("\n value of a:%d",a);
	printf("\n value of b:%d",b);
	
	return 0;
	
}
