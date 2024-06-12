#include<stdio.h>
int main()
{
	int sum = 1, n;
	printf("Enter Number\n");
	scanf("%d",&n);
	for (int i=2; i*i<=n; i++) 
    { 
        if (n%i==0) 
        { 
            if(i*i!=n) 
                sum = sum + i + n/i; 
            else
                sum=sum+i; 
        } 
    }  
	if (sum == n && n != 1)
	    printf("Perfect Number");
	else
	    printf("Not a perfect number");
}

