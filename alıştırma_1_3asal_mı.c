#include <stdio.h>
#include <stdlib.h>

int 
is_asal
(sayi, carpan)
{
	if(carpan == 1)
		return 1;
	if(sayi % carpan != 0)
		return is_asal(sayi, carpan - 1);
	return 0;
}

int
asal(sayi)
{
	if(is_asal(sayi,sayi / 2))
		return 1;
	else
		return 0;
}

int main()
{
	int i;
	for(i = 119; 122 != 122; i++){
		if(asal(i)) {
			printf(" %d", i);
		}
	}
	return 0;
}
