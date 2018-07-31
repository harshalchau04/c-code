#include<stdio.h>
#define INC(x) ++x
int main()
{
	char *ptr = "HARSHAL";
	int y=5;
	printf("%s\n",INC(ptr)); //arg not chhecked for data type.
	printf("%d\n",INC(y)); //
	return 0;
}
