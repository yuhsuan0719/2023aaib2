#include <stdio.h>
int isPrime(int n)
{
	/// only 1 and n can divide it 
	///2... n-1 all can't divide it
	for(int i=2; i<n; i++)
	{
		if(n%i==0) return 0; //sad! failed
	}
	return 1; //happy!!!
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2; i<=n; i++)
	{
		if(isPrime(i)) printf("%d ",i);
	}
}