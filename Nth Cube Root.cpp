#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,i,a,x,n3=-1;
	printf("Enter 2 Numbers\n");
	scanf("%d %d",&n1, &n2);
	for (int i=1; i<=n2; i++) 
    {
    	a = (pow(i,n1)==n2) ? x=1 : x=0;
    }
    printf("%d",(x==1 ? n1 : n3));
}

