#include<stdio.h>
void prime_seive(int *p, int n);
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	int a[n] = {0};
	
	prime_seive(a,n);
	for(int m=0;m<=n;m++)
	{
		if(a[m]==1)
		printf("%d ",m);
	}
}
void prime_seive(int *p, int n)
{
	for(int i=3;i<=n;i+=2)
	{ // Consider all odd numbers as prime
		p[i] = 1;
		// Now Seive code starts
		for(int j=3;j<=n;j+=2)
		{
			if(p[j]==1)
			{
				// Mark all the multiples as non-prime
				for(int k=j*j;k<=n;k=k+j)
				{
					p[k] = 0;
				}
			}
		}
		p[2] = 1;
		p[1] = p[0] = 0;
	}
	
}


