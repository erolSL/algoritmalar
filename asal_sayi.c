#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    int var = 1, sayac = 0;
    
    for(i = 2; i < 87; i++){
          var = 1;
          for(j = 2; j <= sqrt(i); j++)
                if(i % j == 0){
                     var = 0;
                     break;
                }
          if(i == 2)
               var = 1;
          if(var)
                  sayac += 1;
    }
    printf("%d",sayac);
    getchar();
    return 0;
}
