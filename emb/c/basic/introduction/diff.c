#include<stdio.h>

int fun() //fine 
//int fun(void) failed due to void, fun run without arg only.
{}
int main()
{
	fun(10,"H","B");
	return 0;
}	
