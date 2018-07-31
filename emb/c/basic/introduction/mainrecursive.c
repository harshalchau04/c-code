#include<stdio.h>
int main()
//int main(void) due to void
{
	static int i=5;
	if(--i)
	{
		printf("%d\n",i);
		main(10);
	}
	return 0;
}
