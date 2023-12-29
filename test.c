#include <stdio.h>

int main (){
    
    // integer
    int lebar;
    int panjang;
    int luas;
    int hitung;
    
    int a;
    int b;
    int hasil;
    
            printf("Masukan Lebar: " );
    scanf( "%d", &lebar );
    
        printf("Masukan Panjang: " );
    scanf( "%d", &panjang );
    
    int hasil= panjang*lebar;
    
    switch ( hasil ) {
        case <= -1:
        printf ( "Negatif Nyet" );
    }
    
    
    /*  
    
                    printf("Masukan Hitung: " );
    scanf( "%d", &hitung );
    
   if ( uwu <= -1 ){
       printf ( "\n+--------------------------------------+\n");
       printf ( "DILARANG MENGGUNAKAN 2 / DUA NILAI NEGATIF!" ) ;
       printf ( "\n+--------------------------------------+\n");
   }
   else{
     luas=panjang*lebar;
   }
   
   if ( luas >= 50 ){
       printf ( "Hasil dari Panjang x Lebar adalah %d", luas ) ;
       printf ( " Dan ini adalah persegi besar" ) ;
   }
   if ( luas <= 49 ){
       printf ( "Hasil Panjang x Lebar dari adalah %d", luas ) ;
       printf ( " Dan ini adalah persegi Kecil" ) ;
   }
   if ( luas <= -1 ){
       printf ( "\nNegatif:( %d", luas ) ;
   }
 else{
       printf ( "Bro ada terjadi kesalahan");
   } 
   
   printf ( "\n");
   printf ( "\n");
   printf ( "\n");
   printf ( "\n");
   
      printf ( "\nMasukan nilai A= ");
   scanf( "%d", &a );
   
      printf ( "\nMasukan nilai A= ");
   scanf( "%d", &b );
   
   
   hasil=a+b;

   if ( hasil >= 50 ){
       printf ( "Hasil dari adalah %d", hasil ) ;
       printf ( " Nilainya besar" ) ;
   }
   else if ( hasil <= 49 ){
       printf ( "Hasil dari adalah %d", hasil ) ;
       printf ( " Nilainya Kecil" ) ;
   }
  else{
       printf ( "Bro ada terjadi kesalahan");
   } */
   
   return 0;
}