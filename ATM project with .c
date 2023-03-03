#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/*
1-Bakiye Görüntüle
2-Para Yatir
3-Para çek
4-Fatura öde
  -internet
   -Elektrik
   -Su
5-çıkış
*/

int main () {


    int i,secim;
    int j;
    int para=1000;
    int miktar;
    int eski_bakiye;
   
    system("color 0a");
    for(i=1;i<2;i++)
    {
        printf("1-Bakiye Görüntüle\n");
        printf("2-Para Yatir\n");
        printf("3-Para çek\n");
        printf("4-Fatura öde\n");
        printf("5-çikiş\n");
        printf("lütfen yapmak istediginiz işlemi seciniz\n");
        scanf("%d",&secim);
        
        switch(secim)
    {
        case 1:
        printf("bakiyeniz:%d TL\n\n",para);
        break;

        case 2:
        printf("yatirmak istediginiz miktari giriniz:");
        scanf("%d",&miktar);
        eski_bakiye=para;
        para=para+miktar;

        system("cls");
        printf("\n\n************************************\n\n");
        printf("eski bakiyeniz:%d TL\n",eski_bakiye);
        printf("çektiğiniz miktar:%d TL\n",miktar);
        printf("yeni bakiyeniz:%d TL\n",para);
        printf("\n\n************************************\n\n");
        break;
        
        case 4:

        for(j=0;j<3;j++)
        {        
        printf("fatura ödemek istediginiz kategoriyi seciniz\n");
        printf("1-internet\n");
        printf("2-Elektrik\n");
        printf("3-Su\n");
        scanf("%d",&secim);

        switch (secim)
        {
        case 1:
        printf("internet faturasi ödeme sayfasina hosgeldiniz\n");
        para=para-200;
        printf("internet faturasi ödendi\n");
        printf("yeni bakiyeniz:%d TL\n",para);
        break;
        
        case 2:
        printf("elektrik faturasi ödeme sayfasina hosgeldiniz\n");
        para=para-300;
        printf("elektrik faturasi ödendi\n");
        printf("yeni bakiyeniz:%d TL\n",para);
        break;

        case 3:
        printf("su faturasi ödeme sayfasina hosgeldiniz\n");
        para=para-400;
        printf("su faturasi ödendi\n");
        printf("yeni bakiyeniz:%d TL\n",para);
        break;

        default:
        printf("yanlis secim yaptiniz\n");
        break;
        }

        }

    }

    }

    return 0;
}

