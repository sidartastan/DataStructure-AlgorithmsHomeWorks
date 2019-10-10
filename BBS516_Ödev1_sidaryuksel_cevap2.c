
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(void)
{

int sayi=100, i, count=0;
char kelime[100];
char harf;



printf("Lutfen kelime girin: \n");
gets(kelime);

printf("Lutfen bir karakter girin: \n");
scanf("%c",&harf);

for (i=0;i<=sayi;i++){
             if(kelime[i]==harf)
                             count+=1;
}

printf("%s kelimesinde %c harfi %d kez girildi.",kelime, harf,count);


getch();
}
