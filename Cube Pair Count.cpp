#include<stdio.h>
#include<math.h>
int main()
{
	int n,c=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i*i*i<=n;i++)
	{
		int cb = i*i*i;
		int diff = n - cb;
		int cbrtdiff = cbrt(diff);
		if(cbrtdiff*cbrtdiff*cbrtdiff == diff)
		c++;
	}
	printf("%d",c);
}
