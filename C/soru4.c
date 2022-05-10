#include <stdio.h>
#include <stdlib.h>

int asalcarpan(int sayi,int i){
    if(sayi==1)
        return 1;
    else {
        if(sayi%i==0){
        printf("%d  ",i);
        sayi=sayi/i;
        asalcarpan(sayi,i);
    }else
       asalcarpan(sayi,i+1);
    }
}


int main()
{
    int sayi;
    printf("lutfen sayinizi giriniz: ");
    scanf("%d",&sayi);
    printf("asal carpanlari: ");
    asalcarpan(sayi,2);
    return 0;
}
