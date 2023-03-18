/*
  Pattern Printing Program
Pattern 3:

     *
    ***
   *****
  *******
 *********
***********
  
  
  
*/

#include<stdio.h>
void main()
{
	int r,c,space,n; 	
	printf("\nEnter number of line = ");
	scanf("%d",&n);
	for(r = 1; r <= n; r++)//line control or Row control
	{
		// Pattern 2 
		//First print space in the same row or line 
		for(space = n; space>=r; space--) //Space Control 
		{
			printf(" ");  // Space Control  
		}	
		
		// Pattern 1 
		// Than print the value in the same row
		for(c = 1; c<=2*r-1; c++) //value control loop 
		{
//			if(c%2==0)
//			 printf("0");  // Value 
//			else
//			 printf("1");
              printf("$");
		}	
		printf("\n");   // New Line
	}
	
}


