#include <stdio.h>
#include <math.h>


char sayilar[3] = {'0', '1', '\0'};

void Swap(char *dizi, int sinir)
{
     int i, j, temp;
     for(i = 0, j = sinir - 1; i < j; i++, j--) {
           temp = dizi[i];
           dizi[i] = dizi[j];
           dizi[j] = temp;
     }
}

void meyin(void)
{
    int i, sayi, j, k, sinir;
    char dizi[10];
    sinir = pow(2, 14);
    for(i = 0; i < sinir; i++) {
          sayi = i;
          j = 0;
          while(sayi >= 1) {
                     dizi[j] = sayilar[sayi % 2];
                     sayi = sayi / 2;
                     j++;
          }         
          Swap(dizi, j);
          dizi[j] = '\0';
          for(k = 0; k < strlen(dizi); k++)
                printf("%c",dizi[k]);
          printf("\t%d\n", i);
    }
}

int main()
{
    meyin(); 
    getchar();
    return 0;
}
