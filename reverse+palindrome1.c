#include <stdio.h>
void main()
{
	int input,l_d,temp,sum;
	scanf("%d",&input);
	temp=input;
	while(input!=0)
	{
		l_d=input%10;
		printf("%d",l_d);
//		sum=l_d;
		input=input/10;
		
	}
	
//	if(temp==sum)    
//printf("palindrome number ");    
//else    
//printf("not palindrome"); 
//	
}
/*
345
345%10=5
345/10




*/
