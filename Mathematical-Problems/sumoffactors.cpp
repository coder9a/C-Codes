#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x,maxprime,s=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	
	while(n%2==0)
	{
		maxprime = 2;
		s=s+2;
		n=n/2;
	}
	for(i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			maxprime = i;
			s = s + i;
			n=n/i;
		}
	}
		if(n > 2)
	maxprime = n;
	s = s + n;
	//printf("maxprime = %d",maxprime); 
    printf("Sum is %d",s);
}
