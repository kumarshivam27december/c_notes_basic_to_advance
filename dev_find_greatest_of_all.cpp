#include <stdio.h>
int main(){
	int a,b,c,d;
	a=21;
	b=30;
	c=56;
	d=15;
	if(a>b and a>c and a>d ){
		printf("a isthe largest of all");
	}else if(b>a and b>c and b>d){
		printf("b is the largestof all");
	}else if(c>a and c>b and c>d){
		printf("c is the largest of all");
	}else{
		printf("d is the largestof all");
	}
}
