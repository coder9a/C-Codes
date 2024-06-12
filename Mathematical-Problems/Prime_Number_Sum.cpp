//prime sum
#include<stdio.h>
int main()
{
	int n1,n2,j,i,flag,sum=0;
	printf("Enter lower limit: ");
    scanf("%d", &n1);
    printf("Enter upper limit: ");
    scanf("%d", &n2);
	for(i=n1;i<=n2;i++)
	{
		flag = 0;
		for(j=2;j<=i/2;j++)
	 	{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("%d\t",i);
			sum = sum+i;
		}
		
	}
	printf("Sum = %d",sum);
	return 0;
}
