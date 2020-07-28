#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
	int i=0;
	if(n <= 1){
		return 0;
	}
	for (i =2; i< n; i++)
	{
		if(n % i ==0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int n, result;
	printf("Enter the number to check if it is prime or not\n");
	scanf("%d", &n);
	
	result = isPrime(n);
	if(result == 0 )
		printf("not a prime number\n");
	else
		printf("prime number\n");
	return EXIT_SUCCESS;
}
