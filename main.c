#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "funciones.h"

int main(){
    char chips [3][20] ;
    int stockChips [3] ;
    int metalParts = 0 , buttons = 0 , optM = 0, optC = 0;
    char products [3][20] ;
    int productsCostMaterial [3][3];
    int productsChips[3][3];
    float productsPrice [3];

    while(optC != 1){

        optM = menu(chips, stockChips, &buttons, &metalParts, productsCostMaterial, products , productsChips, productsPrice);
        optC = validateInts();
    }
    printf("Si desea continuar presione 0, caso contrario presione 1\n");
    printf(">> ");

    return 0;
}