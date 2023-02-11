#include <stdio.h>
void main()
{
	int a=5,b=10;
	int c= ++a;
	// uniary increment and deincreament
	//  ++a preincreament  first increament then assign it to previous value
	//   a++ postincreament
	int d=a++;  // if d=++a then the value will be a will be 7
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);
	printf("%d",d);

}
