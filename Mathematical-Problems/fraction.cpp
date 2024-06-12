#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,d1,d2,x,y,z,lcm,max;
	printf("Enter 4 numbers\n");
	scanf("%d %d %d %d", &n1, &d1, &n2, &d2);
	max = (d1>d2) ? d1 : d2;
	while(1)
	{
		if(max % d1 == 0 && max % d2 == 0)
		{
			lcm = max;
			break;
		}
	max++;
	}
	x = (n1*lcm)/d1;
	y = (n2*lcm)/d2;
	z=x+y;
	printf("%d/%d",z,lcm);
	return 0;
}
