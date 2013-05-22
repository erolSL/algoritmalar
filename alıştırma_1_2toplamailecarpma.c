#include <stdio.h>

long topla_carp(int m, int n)
{
	if(m == 0)
		return 0;
	else
	    return n + topla_carp(m - 1, n);
}

int main()
{
	int m, n;
	printf("sayilari gir: ");
	scanf("%d %d",&m,&n);
	getchar();
	printf("%ld",topla_carp(m, n));
	getchar();
	return 0;
}
