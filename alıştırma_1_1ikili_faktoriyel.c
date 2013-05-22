#include <stdio.h>

long ikili_fak(int n)
{
	if(n == 2)
		return 2;
	if(n == 1)
		return 1;
	return n * ikili_fak(n - 2);
}

int main()
{
	int n;
	printf("sayı gir: ");
	scanf("%d",&n);
	printf("%ld",ikili_fak(n));
	return 0;
}
