#include <stdio.h>
int f(int n)
{
	static int i=1;
	if(n>=5)
		return n;
	n=n+i;
	i++;
	return f(n);
	
	
}
int main()
{
	int k=f(1);
	printf("%d",k);
}
