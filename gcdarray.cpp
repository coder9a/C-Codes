#include<stdio.h>
int gcd(int a, int b)
{
	int x,i;
	x = (a<b) ? a : b;
	for(i=x;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
        break;
	}
	return i;
}
int main()
{
	int n,i,x,y;
	printf("Enter Array Size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	x = gcd(a[0],a[1]);
	for(i=2;i<n;i++)
	{
		y = gcd(x,a[i]);
	}
	printf("GCD of array is %d",y);
	return 0;
}

