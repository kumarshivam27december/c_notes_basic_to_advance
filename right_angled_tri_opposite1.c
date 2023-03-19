/*
print the following pattern
                 *
                ***
               *****

*/
#include <stdio.h>
void main(){
	int i,j,input,space;
	printf("Enter the number of lines = ");
	scanf("%d",&input);
	for(i=1;i<=input;i++){
		for(space=input;space>=i;space--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
