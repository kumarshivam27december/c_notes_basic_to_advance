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
		
		for(space = n; space>=r; space--)  
		{
			printf(" ");  // Space Control  
		}	
		
		
		for(c = 1; c<=2*r-1; c++) //value control loop 
		{

              printf("$");
		}	
		printf("\n");  
	}
	
}


