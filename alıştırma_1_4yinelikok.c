//~ -lm ile derlenir... 
#include <stdio.h>
#include <math.h>

float al(int dis, int ic, float sonuc)
{
//	printf("%d %d\n",dis, ic);
	if((dis == 100) && (ic == 105))
		return sonuc;
	else {
		sonuc = dis * sqrt(ic + al(dis + 1, ic + 1, sonuc));
		return sonuc;
    }
}

void basla(int baslangic)
{
	printf("%f",al(baslangic, baslangic + 5, 0));
}


int main()
{
	int n;
	printf("sayi gir: ");
	scanf("%d",&n);
	getchar();
    basla(n);
	getchar();
	return 0;
}
