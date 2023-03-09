#include <stdio.h>
/**
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5*/
void main()
{
	int input,i,j,n=5;
	scanf("%d",&input);
	for(i=1;i<=input;i++)
	{
	   for(j=1;j<=i;j--){
	   	printf("%d",n);
	   }
	   printf("\n")	;
	}
	
	
}

















