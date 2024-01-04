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
        return 0;
    }
    else {
      // Text yang akan muncul di console
      printf("1. Hitung Luas Persegi\n");
      printf("2. Hitung Luas Segi Tiga\n");

      printf("Input Hitung ( 1 atau 2 ): "); 
      scanf("%d", &hitung);
    }

    switch ( hitung )
    {
        case 1 :
        printf( "Masukan Panjang: ");
        scanf( "%d", &panjang ); 

        printf( "Masukan Lebar: ");
        scanf( "%d", &lebar ); 

        // Ngitung dulu :v
        luas= panjang*lebar;

        if ( luas >=80 ){ 
            printf( "Hasil dari Panjang X Lebar adalah = %d x %d = %d\n", panjang, lebar, luas);
            printf( "Dan ini adalah persegi Besar");
            return 0;
        }
        else if ( luas<=80) {
            printf( "Ini persegi kecil:(");
            return 0;
        }

        default :
        printf ( "Menu yang lu masukin ngga ada -_-");
    }
}