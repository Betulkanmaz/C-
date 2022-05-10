#include <stdio.h>
#include <stdlib.h>

int polindrom(char dizi[],int x,int y){
if(x>y)
    return 1;
else if(dizi[x] == dizi [y]){
    return(polindrom(dizi,++x,--y));
}
else
    return 0;

}
int main()
{
    char kelime [1000];
    int sonuc;
    printf("kelime giriniz: ");
    gets(kelime);
    sonuc=polindrom(kelime,0,strlen(kelime)-1);
    if(sonuc==1){
        printf("%s kelimesi polindrom kelimedir.",kelime);
    }
    else
        printf("%s kelimesi polindrom degildir",kelime);

    return 0;
}
