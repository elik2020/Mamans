#include <stdio.h>

void find_matches(unsigned long x, unsigned long y);
void print_matches(int matches);
int get_numbers(int num);
/**
 * @brief The function checks how much turned on beats there are in the same place in the binry form of two numbers(unsigned long numbers)
 * 
 * @param x first number
 * @param y second namber
 */
void find_matches(unsigned long x, unsigned long y){
    unsigned long z;
    int count = 0;

    z = x&y;

    while(z != 0){ /*Checking how much matches was by counting how much turned on bits are in the new number z*/
        if((z&1) == 1){
            count += 1;
        }
        z = z >> 1;
    }
    print_matches(count);
}
/**
 * @brief The function print how much turned on beats there are in the same place in the binry form of two numbers
 * 
 * @param matches The amount of the turned on beats there are in the same place in the binry form of two numbers
 */
void print_matches(int matches){
    printf("There are %d turn on bits in the same spot in the first number and second number\n",matches);
}
/**
 * @brief Get the numbers the user entered function and prints him what number to enter the first or second
 * 
 * @param num  Identify Number to know the number the user will enter the first or the second number
 * @return the value of the number the user entered
 */
int get_numbers(int num){
    unsigned long copy;
    if(num == 1){
        printf("Enter the first number:");
        scanf("%lu",&copy);
        return copy;
    }else{
        printf("Enter the second number:");
        scanf("%lu",&copy);
        return copy;
    }
}