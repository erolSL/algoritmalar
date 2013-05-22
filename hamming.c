#include <stdio.h>

int ishamming(int x)
{
	if(x == 1)
           return 1;
	if(x%2 == 0)
           return ishamming(x / 2);
	if(x%3 == 0)
           return ishamming(x / 3);
	if(x%5 == 0)
           return ishamming(x / 5);
	return 0;
}

int hamming(int x)
{
	if(x == 1)
        return 1;
	if( ishamming(x))
        printf("%d sayisi hamming sayisidir.",x);
	else
        printf("%d sayisi hamming sayisi degildir.",x);
	return x;
}

int main()
{
	int sayi;
	printf("hangi sayi: ");
	scanf("%d",&sayi);
	getchar();
	hamming(sayi);
    getchar();
	return 0;
}
