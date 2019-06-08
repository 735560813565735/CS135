//Jake Mayer cs135
// calculator project 4 program
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (void) {
        int option[6]={1,2,3,4,5,6};
        int i, optionNum, intOne, intTwo;
        double dblOne, dblTwo;
        int intAdd, intSub, intMulti, intDiv;
        double dblAdd, dblSub, dblMulti, dblDiv;
        char *operators[6]={"addition","subraction","multiplication","division","toggle calculator type","exit program"};
        //default calculator mode
        bool mode = 0;
        printf("This program implements a calculator.\n");
        do {
                //prints all options to user
                printf("Options:\n");
                for (i = 0; i < 6; i++) {
                        printf("%d - %s\n", option[i], operators[i]);
                }
                printf("Please enter your option: ");
                scanf("%d", &optionNum);
        } while(option[5]!=6);
        //logic for what user enters
        while (optionNum != 6) {
                switch (optionNum)
                {
                //addition case
                case 1:
                        if (mode == 0) {
                                printf("Enter first term: ");
                                scanf("%lf", &dblOne);
                                printf("Enter second term: ");
                                scanf("%lf", &dblTwo);
                                dblAdd = dblOne + dblTwo;
                                printf("The sum is: %.15lf\n",dblAdd);
                        }
                        else {
                                printf("Enter first term: ");
                                scanf("%d", &intOne);
                                printf("Enter second term: ");
                                scanf("%d", &intTwo);
                                intAdd = intOne + intTwo;
                                printf("The sum is: %d\n",intAdd);
                        } break;
                //subtraction case
                case 2:
                        if (mode == 0) {
                                printf("Enter first term: ");
                                scanf("%lf", &dblOne);
                                printf("Enter second term: ");
                                scanf("%lf", &dblTwo);
                                dblSub = dblOne - dblTwo;
                                printf("The difference is: %.15lf\n",dblSub);
                        }
                        else{
                                printf("Enter first term: ");
                                scanf("%d", &intOne);
                                printf("Enter second term: ");
                                scanf("%d", &intTwo);
                                intSub = intOne - intTwo;
                                printf("The difference is: %d\n",intSub);
                        } break;
                //multiplication case
                case 3:
                        if (mode == 0) {
                                printf("Enter first term: ");
                                scanf("%lf", &dblOne);
                                printf("Enter second term: ");
                                scanf("%lf", &dblTwo);
                                dblMulti = dblOne * dblTwo;
                                printf("The product is: %.15lf\n",dblMulti);
                        }
                        else {
                                printf("Enter first term: ");
                                scanf("%d", &intOne);
                                printf("Enter second term: ");
                                scanf("%d", &intTwo);
                                intMulti = intOne * intTwo;
                                printf("The product is: %d\n",intMulti);
                        } break;
                //division case
                case 4:
                        if (mode == 0) {
                                printf("Enter first term: ");
                                scanf("%lf", &dblOne);
                                printf("Enter second term: ");
                                scanf("%lf", &dblTwo);
                                dblDiv = dblOne / dblTwo;
                                if (dblTwo==0) {
                                        printf("Cannot divide by zero!\n");
                                }
                                else{
                                        printf("The quotient is: %.15lf\n",dblDiv);
                                }
                        }
                        else {
                                printf("Enter first term: ");
                                scanf("%d", &intOne);
                                printf("Enter second term: ");
                                scanf("%d", &intTwo);
                                intDiv  = intOne / intTwo;
                                if (intTwo==0) {
                                        printf("Cannot divide by zero!\n");
                                }
                                else {
                                        printf("The quotient is: %d\n",intDiv);
                                }
                        } break;
                //switches calculator mode
                case 5:
                        mode = !mode;
                        if (mode == 0) {
                                printf("Calculator now works with doubles.\n");
                        }
                        else {
                                printf("Calculator now works with integers.\n");
                        }
                        break;

                default:
                        printf("Invalid Option.\n");
                        do {
                                //prints all options to user
                                printf("Options:\n");
                                for (i = 0; i < 6; i++) {
                                        printf("%d - %s\n", option[i], operators[i]);
                                }
                                printf("Please enter your option: ");
                                scanf("%d", &optionNum);
                        } while(option[5]!=6);
                } // end of switch
                do {
                        //prints all options to user
                        printf("Options:\n");
                        for (i = 0; i < 6; i++) {
                                printf("%d - %s\n", option[i], operators[i]);
                        }
                        printf("Please enter your option: ");
                        scanf("%d", &optionNum);
                } while(option[5]!=6);
        }
        return 0;
}
