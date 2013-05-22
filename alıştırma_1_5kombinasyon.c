#include <stdio.h>

int kombinasyon(int n, int k)
{
	if(n == 0)
		return 1;
	return kombinasyon(n - 1 , k) + kombinasyon(n - 1, k - 1);
}

int main()
{
	int m, n;
	printf("sayıları gir: ");
	scanf("%d %d",&m,&n);
	printf("%d",kombinasyon(m,n));
	return 0;
}
