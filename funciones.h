#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int validateInts();
float validateFloats();
void readChain(char *chain, int n);
int menu(char chips[3][20], int stockChips[3], int *buttons, int *metalParts, int productsCostMaterial [3][3], char products[3][20], int productsChips[3][3], float productsPrice [3]);
void enterMaterials(char chips[3][20], int stockChips[3], int *buttons, int *metalParts);
void registerProducts(int productsCostMaterial[3][3], char products[3][20], char chips [3][20], int productsChips[3][3], float productsPrice [3]);
void createAndSellProducts(char chips[3][20], int stockChips[3], int *buttons, int *metalParts, int productsCostMaterial[3][3], char products[3][20], int productsChips[3][3], float productsPrice [3]);
void addMaterialStock(char chips[3][20], int *buttons, int *metalParts, int stockChips[3]);
void changeProductsName(char products[3][20]);
void changeProductsMaterialsNeed(char products[3][20], char chips[3][20], int productsChips[3][3], float productsPrice [3], int productsCostMaterial[3][3]);
void deleteProduct(char products[3][20], char chips[3][20], int productsChips[3][3], float productsPrice [3], int productsCostMaterial[3][3]);
