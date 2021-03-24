#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("Enter number\t");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		{
			printf("Not prime");
			//return;
		}
		else
		{
			printf("Prime");
			//return;
		}
	return 0;
}
