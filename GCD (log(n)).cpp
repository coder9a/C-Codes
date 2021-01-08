#include<stdio.h>
int gcd(int m, int n)
{
	if(m == 0)
	{
		return n;
	}
	else if(n == 0)
	{
		return m;
	}
	else
	{
		return (gcd(n%m, m));
	}
}
int main()
{
	int a,b,x,y,p;
	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);
	if(a<b)
	{
		x=a;
	    y=b;
	}
	else
	{
		x=b;
	    y=a;
	}
	p = gcd(x,y);
	printf("GCD is %d\t",p);
}
