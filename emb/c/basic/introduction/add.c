#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4;
	printf("%d\t%d\t%d\t%d\n",a,a=a+d,a=a+b,a=a+b+c);
	return 0;
}
