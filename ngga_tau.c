#include <stdio.h>
#include <conio.h>

int main (){
    
    int luas;
    int jumlah_bangun;

    int panjang;
    int lebar;

    printf( "Masukan Panjang: ");
    scanf( "%d", &panjang ); 

    printf( "Masukan Lebar: ");
    scanf( "%d", &lebar ); 

    luas= panjang*lebar;

    if ( luas <= 10 ){
        printf( "Kurang dari 10 ");
    }
}