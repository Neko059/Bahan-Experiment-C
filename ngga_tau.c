#include <stdio.h>
#include <conio.h>

int main (){
    
    int luas;
    int jumlah_bangun;

    int panjang;
    int lebar;

    int hitung;

    printf( "Masukan Panjang: ");
    scanf( "%d", &panjang ); 

    printf( "Masukan Lebar: ");
    scanf( "%d", &lebar ); 

    luas= panjang*lebar;

    if ( luas <= 10 ){
        printf( "Kurang dari 10 ");
    }
    else {
      // Text yang akan muncul di console
      printf("1. Hitung Persegi\n");
      printf("2. Hitung Segi Tiga\n");

      printf("Input Hitung (1 atau 2 : "); 
      scanf("%d", &hitung);
    }

    switch ( hitung )
    {
        case 1 :
        printf( "Masukan Panjang: ");
        scanf( "%d", &panjang ); 

        printf( "Masukan Lebar: ");
        scanf( "%d", &lebar ); 

        luas= panjang*lebar;
        printf( "Hasil dari Panjang X Lebar adalah = %d x %d = %d", panjang, lebar, luas);
    }
}