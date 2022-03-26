#include "functions.h"

int main(void){
    unsigned long x,y;

    x = get_numbers(1);
    y = get_numbers(2);
    find_matches(x,y);

    return 0;
}