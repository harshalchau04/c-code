#include<stdio.h>
int main()
{
	printf("CURRENT_FILE: %s\n",__FILE__);
	printf("CURRENT_DATE: %s\n",__DATE__);
	printf("CURRENT_TIME: %s\n",__TIME__);
	printf("LINE  NUMBER: %d\n",__LINE__);
	return 0;
}
