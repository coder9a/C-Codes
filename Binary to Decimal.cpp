#include<stdio.h>
#include<math.h>
int main()
{
	int x=0,n,a=0,l;
	printf("Enter Number\n");
	scanf("%d",&n);
	l=sizeof(n);
//	for(int i=1;i<=n;i++)
	int i = 0;
	    while(n!=0)
	    {
	    	a = n%10;
	    	x = x + a*pow(2,i);
	    	n=n/10;
			i++;
	    }   	
	printf("%d",x);
}
