#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define SIZE 30

int main(void){
    char* string = (char*)malloc(sizeof(char)*SIZE);

    int length = get_chars(string);

    print_text(string,length);
    print_alphaNumeric_amount(string,length);

    return 0;
}