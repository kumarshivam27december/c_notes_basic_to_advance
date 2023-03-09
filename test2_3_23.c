#include <stdio.h>
void main()
{
	int a,b;
	printf("ENTER THE VALUE OF a ");
	scanf("%d",&a);
	printf("\nENTER THE VALUE OF b ");
	scanf("%d",&b);
	if(b!=0){
	
	printf("\nThe addition is %d",a+b);
	printf("\nThe substraction is %d",a-b);
	printf("\nThe multiplication is %d",a*b);
	printf("\nThe remainder is %d",a%b);
	printf("\nThe division is %d",a/b);

	}
	else
	{
	printf("\nThe addition is %d",a+b);
	printf("\nThe substraction is %d",a-b);
	printf("\nThe multiplication is %d",a*b);
	printf("\n The remainder when anything is divided by 0 is nothing");
	printf("\n The division is not possible is when second input is 0");
	printf("\nPlease take another user input of b");
	}
}
