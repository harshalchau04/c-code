#include<stdio.h>
#define MARGE(a,b) a##b // ## used to marge data
int main()
{
	printf("%d\n",MARGE(12,34));
}
