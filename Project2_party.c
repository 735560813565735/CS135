// This program checks if Jerry is going to have a happy or sad party
#include<stdio.h>

int main (void) {

int loavesBread;
int cartonEggs;
int lbsBacon;
int Budget;
int $Bread;
int $Eggs;
int $Bacon;
int sumEggs;
int sumBacon;
int sumBread;
int total;

//pre-req 
	printf("Enter the number of cartons of eggs and price per carton: ");
		scanf("%d%d", &cartonEggs, &$Eggs);
	printf("Enter the number of pounds of bacon and price per pound: ");
		scanf("%d%d", &lbsBacon, &$Bacon);
	printf("Enter the number of loaves of bread and price per loaf: ");
		scanf("%d%d", &loavesBread, &$Bread);

	printf("Enter Jerry's budget: ");
		scanf("%d", &Budget);

//formulas
		sumEggs = $Eggs * cartonEggs;
		sumBacon = $Bacon * lbsBacon;
		sumBread = $Bread * loavesBread;
		total = sumBread + sumBacon + sumEggs;

// condition 1
if (Budget > 0){
	printf("(1) Jerry has some money to buy breakfast supplies.\n");
	}
else {
	printf("(1) Jerry does not have money to buy anything.\n");
	}

// condition 2
if (Budget >= sumEggs + sumBacon + sumBread) {
	printf("(2) Jerry can buy all the supplies for his party.\n");
	}

else if (Budget >= sumEggs + sumBacon || Budget >= sumEggs + sumBread || Budget >= sumBacon + sumBread){	
	
	if (Budget >= sumEggs + sumBacon && Budget < total) {
		printf("(2) Jerry can only buy eggs and bacon for his party\n");
	}
	else if (Budget >= sumEggs + sumBread && Budget < total) {
		printf("(2) Jerry can only buy eggs and bread for his party\n");
	}
	else if (Budget >= sumBacon + sumBread && Budget < total) {
		printf("(2) Jerry can only buy bacon and bread for his party\n");
	}
}
else if (Budget >= sumEggs || Budget >= sumBacon|| Budget >= sumBread)
{
	if (Budget >= sumEggs && Budget < total && Budget < sumBacon + sumBread && Budget < sumEggs + sumBread && Budget < sumEggs + sumBacon) {
		printf("(2) Jerry can only buy eggs for his party.\n");
	}
	else if (Budget >= sumBacon && Budget < total && Budget < sumBacon + sumBread && Budget < sumEggs + sumBread && Budget < sumEggs + sumBacon) {
		printf("(2) Jerry can only buy bacon for his party.\n");
	}
	else if (Budget >= sumBread && Budget < total && Budget < sumBacon + sumBread && Budget < sumEggs + sumBread && Budget < sumEggs + sumBacon) {
		printf("(2) Jerry can only buy bread for his party.\n");
	}
}
else {
	printf("(2) Jerry is going to have a very sad party.\n");
}
//condition 3

if (sumEggs <= Budget && Budget < sumBacon && Budget < sumBread || sumBacon <= Budget && Budget < sumEggs && Budget < sumBread || sumBread <= Budget && Budget < sumEggs && Budget < sumBacon) {
	printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
}
else {
	printf("(3) More than one of the breakfast supplies is cheaper than or equal to Jerry's budget or they are all more expensive.\n");
}

//condition 4

if (Budget < sumBacon && sumBread > Budget && Budget >= sumEggs || Budget < sumEggs && sumBread > Budget && Budget >= sumBacon || Budget < sumEggs && sumBacon > Budget && Budget >= sumBread) {
	printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
}
else {
	printf("(4) At least two breakfast supplies are cheaper than or equal to Jerry's budget.\n");
}
//condition 5
if (sumEggs == sumBacon == sumBread) {
	printf("(5) All the supplies cost the same.\n");
	}
else if (sumEggs == sumBacon && sumEggs != sumBread || sumEggs == sumBread && sumEggs != sumBacon || sumBacon == sumBread && sumBacon != sumEggs) {
	printf("(5) Only two breakfast supplies cost the same.\n");
	}
else {
	printf("(5) No supplies have the same total price.\n");
	}

return 0;
}

