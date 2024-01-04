#include <stdio.h>
#include <conio.h>

int main (){
    
    int luas,jml_bangun,panjang,lebar,libur,hitung;
    float i;

    printf( "Masukan Lebar: ");
    scanf( "%d", &jml_bangun ); 

    for(i = 10; i <= jml_bangun; i++)
    {
      // Text yang akan muncul di console
      printf("1. Hitung Luas Persegi\n");
      printf("2. Hitung Luas Segi Tiga\n");

      printf("Input Hitung ( 1 atau 2 ): "); 
      scanf("%d", &hitung);

        switch ( hitung )
    {
        case 1 :
        printf( "Masukan Panjang: ");
        scanf( "%d", &panjang ); 

        printf( "Masukan Lebar: ");
        scanf( "%d", &lebar ); 

        // Ngitung dulu :v
        luas= 1.2*panjang*lebar;

        if ( luas >=80 ){ 
            printf( "Hasil dari 1.2 x Panjang X Lebar adalah = 1.2 x %d x %d = %d\n", panjang, lebar, luas);
            printf( "Dan ini adalah Segi Tiga Besar");
            return 0;
        }
        else if ( luas<=80) {
            printf( "Ini Segi Tiga kecil:(");
            return 0;
        }

        case 2 :

        printf( "Masukan Panjang: ");
        scanf( "%d", &panjang ); 

        printf( "Masukan Lebar: ");
        scanf( "%d", &lebar ); 

        luas= panjang*lebar;

        if ( luas >=150 ){ 
            printf( "Hasil dari Panjang X Lebar adalah = %d x %d = %d\n", panjang, lebar, luas);
            printf( "Dan ini adalah persegi Besar");
            return 0;
        }
        else if ( luas<=150) {
            printf( "Ini persegi kecil:(");
            return 0;
        }

        default :
        printf ( "Menu yang lu masukin ngga ada -_-");
    }
  }
}