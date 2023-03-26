#include <stdio.h>
void main()
{
	int arr[100];
	int i,value;
	int size;
	printf("enter the size of the element = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n Enter element [%d] = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n Before deletion \n");
	for(i=0;i<size;i++)
	{
		printf("\n element [%d] = %d",i,arr[i]);	
	}
	printf("\n value after deletion\n");
	value =arr[size-1];
	size=size-1;
	printf("\n the value %d is deleted from the list \n",value);
	
	printf("\n after delete a value from array \n");
    for(i=0;i<size;i++){
	
		printf("\n element [%d] = %d",i+1,arr[i]);

	}
	
}
