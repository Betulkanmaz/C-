#include <stdio.h>
#include <stdlib.h>

int kontolasal(int sayi,int i)
{
    if(i==1){
        return 1;
    }
    else{}
        if(sayi%i==0){
            return 0;
        }
        else
            kontolasal(sayi,i-1);
    }
int main (void)
{
    int sayi,asal;
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi);
    asal=kontolasal(sayi,sayi/2);
    if(asal==1)
        printf("%d asaldir",sayi);
    else
        printf("%d asal degildir",sayi);

}
