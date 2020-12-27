#include<stdio.h>

int main()
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            for(int k=i;k>=1;k--)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
