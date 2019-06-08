// this program is supposed to add, subtract and multiply complex numbers.
//Jake Mayer cs135 Project 7
#include <stdio.h>
#include <stdlib.h>

//function prototypes
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void read_num(float* real_part, float* imaginary_part);
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2);
void print_complex(float real_part, float imaginary_part);
void prompt();

//main function

int main (void) {
        float real_part_1, real_part_2, imaginary_part_1, imaginary_part_2, *real_result, *imaginary_result;
        float real_part, imaginary_part;
        int option;
        printf("Complex Number Arithmetic Program:\n");
        while (option != 4) {
                prompt();
                scanf("%d", &option);
                switch (option) {
                case 1: read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
                        add(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_part, &imaginary_part);
                        print_complex(real_part, imaginary_part);
                        break;
                case 2: read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
                        subtract(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_part, &imaginary_part);
                        print_complex(real_part, imaginary_part);
                        break;
                case 3: read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
                        multiply(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_part, &imaginary_part);
                        print_complex(real_part, imaginary_part);
                        break;
                case 4: printf("Bye!\n");
                        break;
                default:
                        printf("Please input a valid menu option\n");
                        break;
                }
        }



        return 0;
}


// function definitions
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){

        *real_result = real_part_1 + real_part_2;
        *imaginary_result = imaginary_part_1 + imaginary_part_2;
        return;
}
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){

        *real_result = real_part_1 - real_part_2;
        *imaginary_result = imaginary_part_1 - imaginary_part_2;
        return;
}
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result){

        *real_result = real_part_1 * real_part_2 - imaginary_part_1 * imaginary_part_2;
        *imaginary_result = imaginary_part_1 * real_part_2 + real_part_1 * imaginary_part_2;
        return;
}
void read_num(float* real_part, float* imaginary_part){

        printf("Please type in the real component: ");
        scanf("%f", real_part);
        printf("Please type in the imaginary component: ");
        scanf("%f", imaginary_part);
        return;
}
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2){
        printf("Reading the first imaginary number...\n");
        read_num(real_part_1, imaginary_part_1);
        printf("Reading the second imaginary number...\n");
        read_num(real_part_2, imaginary_part_2);
        return;
}
void print_complex(float real_part, float imaginary_part){
        printf("The operation yields %.3f + %.3fi\n", real_part, imaginary_part);
        return;
}

void prompt(){
        printf("1) Add two complex numbers\n");
        printf("2) Subtract two complex numbers\n");
        printf("3) Multiply two complex numbers\n");
        printf("4) Quit\n");
        printf("Choose an option (1 - 4): ");
        return;
}
