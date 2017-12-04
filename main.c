#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inDisBul(int array[],int boyut)
{
    int i;
    float toplam=0;
    int en_uzak_sayi=array[0];
    float en_uzak_fark=0;
    int sayi_index=0;

    for(i=0;i<boyut;i++)
    {
        toplam+=array[i];
    }

    float ortalama = toplam / boyut;
    en_uzak_fark=fabs(array[0]-ortalama);

    for(i=0;i<boyut;i++)
    {
        if(fabs(array[i]-ortalama)>en_uzak_fark)
                {
                en_uzak_fark=fabs(array[i]-ortalama);
                en_uzak_sayi=array[i];
                sayi_index=i;

                }
    }
    printf("Ortalama: %.2f",ortalama);
    printf("\nEn uzak sayi: %d",en_uzak_sayi);
    printf("\nEn uzak fark: %.2f",en_uzak_fark);
    return sayi_index;

}



int main()
{
    int i,boyut;
    int sayi_index;

    printf("Dizi boyutu giriniz:\n");
    scanf("%d",&boyut);

    int array[boyut];

    printf("Elemanlari giriniz:\n");

    for(i=0;i<boyut;i++)
    {
        scanf("%d",&array[i]);
    }

     sayi_index=inDisBul(array,boyut);

     printf("\nEn uzak sayinin indisi:%d",sayi_index);


    return 0;
}
