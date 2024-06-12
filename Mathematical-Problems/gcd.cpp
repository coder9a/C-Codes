#include<stdio.h>
int main()
{
	int a,b,x,i;
	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);
	if(a<b)
	  x=a;
	else
	  x=b;
	for(i=x;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
        break;
	}
	printf("%d",i);
}
