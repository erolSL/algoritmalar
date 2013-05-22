#include <stdio.h>

void pol(int n)
{
	if(n == 1)
		printf(" 1 ");
	else {
		pol(n - 1);
		printf("%d",n);
		pol(n - 1);
	}
}
int main()
{
	int sayi;
	printf("sayi kac olsun: ");
	scanf("%d",&sayi);
	getchar();
	pol(sayi);
	getchar();
	return 0;
}
