
#include<stdio.h>
#include <stdlib.h>

int main(void){

    int sayi=0, enBuyuksayi=0 , i, j, k, l, m,count = 0 ;
    int *sayiDizisi;
    
    printf("Kac adet sayi girilecek? -->  ");
    scanf("%d", &sayi);
    sayiDizisi =(int*) malloc( sayi*sizeof(int));

    for(i=0;i<sayi;i++ ){
		printf( "%d. sayiyi giriniz: \n", (i+1) );
		scanf("%d",&sayiDizisi[i]);

}
//printf("%a", sayiDizisi[i]);

    for (j=0; j<sayi; j++){
        for (k=j+1; k<sayi; k++){
            if (sayiDizisi[j] >= sayiDizisi[k]){
                if ( sayiDizisi[j]> enBuyuksayi){
                enBuyuksayi = sayiDizisi[j] ;}
                
                }
            else{
                if (sayiDizisi[k]> enBuyuksayi){
                enBuyuksayi = sayiDizisi[k];}}
    }
}

//butun sayilar esit mi degil mi kontrol ediyoruz ve ekrana yazdiriyoruz.

   for (l=0; l<sayi; l++){
        for (m=l+1;  m<sayi; m++){
            if (sayiDizisi[l] == sayiDizisi[m]){
                count=1;}
            else{
                count=0;}
            
        }
    }

    if ( count ==1 ){
        printf ( "Butun sayilar esittir" );
    }
    else{
        printf ( "En buyuk sayi %d", enBuyuksayi);
    }




getch();

    free( sayiDizisi );
}
