#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    int partNumber = 1, quantity;
    float price;

    FILE *inventory;
    inventory = fopen("inventory.txt", "w");
    printf("This program stores a business inventory.\n");
    do {
      printf("Please enter item data (part number, quantity, price): ");
      scanf("%d, %d, %f", &partNumber, &quantity, &price);
      if (partNumber != 0) {
        fprintf(inventory, "%d, %d, %.6f\n", partNumber, quantity, price);
      }
    } while(partNumber != 0);
    printf("Thank you. Inventory stored in file inventory.txt\n");

  return 0;
}
