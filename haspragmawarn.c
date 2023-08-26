// Example to explain the working of
// #pragma warn directive
// This program is compatible with C/C++ compiler

#include<stdio.h>

//#pragma warn -rvl /* return value */
//#pragma warn -par /* parameter never used */
//#pragma warn -rch /*unreachable code */
		
int show(int x)
{
	// parameter x is never used in
	// the function
	
	printf("GEEKSFORGEEKS\n");
	
	// function does not have a
	// return statement
}
			
int main()
{
	show(10);
	
	return 0;
}

