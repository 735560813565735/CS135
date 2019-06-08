//Jake Mayer cs135
//project 5 1d and 2d arrays
#include <stdio.h>
#include <stdbool.h>
int main (void) {
        int N,M;
        int i, j;
        int input[10]={0};
        int digitNum[10] = {0,1,2,3,4,5,6,7,8,9};
        // user decides how big the 2d array is
        printf("Enter the size of the array (Row Column): ");
        scanf("%d %d", &N, &M);
        int multiArray[N][M];
        // asks user to input values into row 0 of the array and scans it in
        for(i = 0; i < N; i++) {
                printf("Enter row %d: ", i);
                for (j = 1; j < M + 1; j++) {
                        scanf("%d", &multiArray[i][j]);
                        switch(multiArray[i][j]) {
                        case 0: input[0]++;
                                break;
                        case 1: input[1]++;
                                break;
                        case 2: input[2]++;
                                break;
                        case 3: input[3]++;
                                break;
                        case 4: input[4]++;
                                break;
                        case 5: input[5]++;
                                break;
                        case 6: input[6]++;
                                break;
                        case 7: input[7]++;
                                break;
                        case 8: input[8]++;
                                break;
                        case 9: input[9]++;
                                break;
                        default: printf("Invalid digit.");
                                break;
                        }
                }
        }

        printf("Total counts for each digit:\n");
        for (i = 0; i < 10; i++) {
                printf("Digit %d occurs %d times\n", digitNum[i], input[i]);
        }
        printf("The digit counts directly from the 1D array: \n");
        for (i = 0; i < 10; i++) {
                printf("%d ", input[i]);
        }
        printf("\n");
        printf("The original 2D array entered by the user: ");
        for(i = 0; i < N; i++) {
                printf("\n");
                for (j = 1; j < M + 1; j++) {
                        printf("%d ", multiArray[i][j]);
                }
        }
        return 0;
}
