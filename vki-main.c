//mustafa ra��it kocaba��
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   char soyad[50],cinsiyet;
   int kilo,ik;
   float boy,vki,deger,sonuc,sonuc2;

   printf("Soyadiniz: ");
   scanf("%s",soyad);

   printf("Agirliginizi giriniz(kg) : ");
   scanf("%d",&kilo);

   printf("Boyunuzu giriniz(m): ");
   scanf("%f",&boy);

   vki = kilo/pow(boy,2);


   printf("Vucut Kitle indeks degeriniz: %0.2f",vki);


   printf("\nSiniflandirmaniz :   ");



   if (vki <20)
   {
       printf("Zayif");
   }
   else if(vki==20 || vki<25 )
   {
       printf("Normal");
   }
       else if(vki==25 || vki<30 )
   {
       printf("Hafif Sisman");
   }
       else if(vki==30 || vki<35 )
   {
       printf("Sisman");
   }
       else if(vki==35 || vki<45)
   {
       printf("Saglik Acisindan Onemli");
   }
       else if(vki==45 || vki<50 )
   {
       printf("Asiri Sisman");
   }
   else if(vki>=50)
   {
       printf("Morbid(Olumcul) Sisman");
   }

   printf("\nVKI Araligi     Siniflandirma \n-----------     -------------\n <20             Zayif\n 20-24.9         Normal\n 25-29.9         Hafif Sisman\n 30-34.9         Sisman\n 35-44.9         Saglik Acisindan Onemli\n 45-49.9         Asiri Sisman\n >49.9           Morbid(Olumcul) Sisman ");


   printf("\n Sayin %s \n",soyad);

   printf("Cinsiyetiniz nedir? (E|e|K|k) : ");
   scanf(" %c",&cinsiyet);

   printf("Ulasmak istediginiz vucut kitle indeks degeri nedir? : ");
   scanf("%f",&deger);

   ik= deger*pow(boy,2);

    switch (cinsiyet)
    {
        case 'e':
        case 'E': ik = ik+2; break;
        case 'k':
        case 'K': ik= ik+1; break;
        default : printf("yanlis karakter ");

    }


   printf("ideal Kilonuz %d \n",ik);
   sonuc = (kilo - ik);

  if(sonuc <=0)
  {
      sonuc2 = sonuc*-1;

  }
  else
  {
      sonuc2 = sonuc;
  }

   printf("ideal Kilonuzdan %0.0f kilo",sonuc2);
   (sonuc <=0) ? printf(" eksiksiniz.") : printf(" fazlasiniz.");


   return 0;

}
