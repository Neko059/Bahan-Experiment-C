#include <stdio.h>
#include <conio.h>

int main (){

    int luas,jml_bangun,panjang,lebar,libur,hitung;
    float i;

    printf( "Input Jumlah bangun yang akan dihitung Luas-nya! : ");
    scanf( "%d", &jml_bangun );
    
    for(i = 10; i <= jml_bangun; i++)
    {
      // Text yang akan muncul di console
      printf("\n\n\n\n");
      printf("Imput Metode Perhitungan Luas\n");
      printf("1. Luas Segi tiga\n");
      printf("2. Luas Persegi\n");

      printf("Input Hitung ( 1 atau 2 ): "); 
      scanf("%d", &hitung);

        switch ( hitung )
    {
        case 1 :
        printf( "Masukan Alas Tinggi Segitiga: ");
        scanf( "%d", &panjang ); 

        printf( "Masukan Alas Lebar Segitiga: ");
        scanf( "%d", &lebar ); 

        // Ngitung dulu :v
        luas= 1.2*panjang*lebar;

        if ( luas >=80 ){ 
            printf( "\n\n" );
            printf( "====================================================\n");
            printf( "Hasil dari 1.2 x Alas Tinggi Segitiga X Alas Lebar Segitiga adalah = 1.2 x %d x %d = %d\n", panjang, lebar, luas);
            printf( "Segi Tiga Besar\n");
            printf( "====================================================\n");
            break;
        }
        else if ( luas<=80) {
            printf( "\n\n" );
            printf( "====================================================\n");
            printf( "Hasil dari 1.2 x Alas Tinggi Segitiga X Alas Lebar Segitiga adalah = 1.2 x %d x %d = %d\n", panjang, lebar, luas);
            printf( "Ini Segi Tiga kecil:(\n");
            printf( "====================================================\n");
            break;
        }

        case 2 :

        printf( "Masukan Panjang: ");
        scanf( "%d", &panjang ); 

        printf( "Masukan Lebar: ");
        scanf( "%d", &lebar ); 

        luas= panjang*lebar;

        if ( luas >=150 ){ 
            printf( "\n\n" );
            printf( "====================================================\n");
            printf( "Hasil dari Panjang X Lebar adalah = %d x %d = %d\n", panjang, lebar, luas);
            printf( "Dan ini adalah persegi Besar\n");
            printf( "====================================================\n");
            break;
        }
        else if ( luas<=150) {
            printf( "\n\n" );
            printf( "====================================================\n");
            printf( "Hasil dari Panjang X Lebar adalah = %d x %d = %d\n", panjang, lebar, luas);
            printf( "Ini persegi kecil:(\n");
            printf( "====================================================\n");
            break;
        }

        default :
        printf( "Menu Tidak Valid" );
    //   MessageBox(NULL, "Menu Yang lu masukin ngga ada cok", "Note", MB_ABORTRETRYIGNORE);
    }
  }
}