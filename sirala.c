#include <stdio.h>
#include <stdlib.h>

void
sirala(int *dizi, int sayi)
{
	int i, yedek;
	for(i = 0; i < 4; i++)
		if(sayi > *(dizi + i))
			break;
	while(i < 5) {
		yedek = *(dizi + i);
		*(dizi + i) = sayi;
		sayi = yedek;
		i++;
	}
}

int  main()
{
	int *dizi;
	int i;
	int a = 9;
	dizi = malloc(sizeof(int) * 5);
	//~ for(i = 0; i < 4; i++, a -= 2)
		//~ *(dizi + i) = a;
	sirala(dizi, 8);
	for(i = 0; i < 5; i++)
		printf("%d ", *(dizi + i));
	return 0;
}
