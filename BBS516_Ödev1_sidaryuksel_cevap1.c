
#include<stdio.h>
#include <conio.h>


int main(void)
{
    int ilkDeger, ikinciDeger, ucuncuDeger, enBuyuksayi;

//kullanicican 3 tane sayi girmesi istenilir

    printf("Lutfen birinci sayiyi giriniz: ");
    scanf("%d", &ilkDeger);
    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d", &ikinciDeger);
    printf("Lutfen ucuncu sayiyi giriniz: ");
    scanf("%d", &ucuncuDeger);


//bu sayilardan hangisinin buyuk oldugu karsilastirilip sonuc ekrana yazilir

    if (ilkDeger>ikinciDeger && ilkDeger>ucuncuDeger){
            enBuyuksayi = ilkDeger;
          }
    else if (ikinciDeger>ilkDeger && ikinciDeger>ucuncuDeger){
        enBuyuksayi = ikinciDeger;
        }
    
    else if (ucuncuDeger >ilkDeger && ucuncuDeger>ikinciDeger){
         enBuyuksayi = ucuncuDeger;
        
    } 
    else {
             printf("Butun sayilar birbirine esittir \n");
             enBuyuksayi = ucuncuDeger;
             }

printf ("En buyuk sayi %d ", enBuyuksayi);


getch ();


}



