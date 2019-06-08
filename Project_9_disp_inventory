#include <stdlib.h>
#include <stdio.h>

int main (void){
  int partNumber, quantity;
  float price;

    FILE *inventory;
    inventory = fopen("inventory.txt", "r");

printf("Below are the items in your inventory.\n");
printf("Part#\tQuantity\tItem Price\n");

while(!feof(inventory)){
fscanf(inventory, "%d, %d, %f\n", &partNumber, &quantity, &price);
printf("%5d\t%8d\t$%9.2f\n", partNumber, quantity, price);
}


fclose(inventory);
  return 0;
}
