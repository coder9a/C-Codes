#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,min,i;
	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);
	min = (a<b)?a:b;
	for(i=min;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
        break;
	}
	printf("GCD = %d\nLCM = %d", i, ((a*b)/i));
	return 0;
}
