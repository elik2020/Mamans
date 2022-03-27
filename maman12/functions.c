#include <stdio.h>
#include <stdlib.h>

#define MAXLINESIZE 20
#define SIZE 30

int get_chars(char* str){
    int countChars = 0;
    int times = 1;
    char currentChar;
    while((currentChar = getchar()) != EOF && currentChar != '\n'){
        
        if(countChars >= SIZE*times){
            times++;
            str = (char*)realloc(str,sizeof(char)*(SIZE*times));
        }

        *(str+countChars) = currentChar;
        countChars++;
    }
    return countChars;
}

void print_text(char* str,int length){
    int i;
    int rowLength = 0;

    printf("the string you entered is:\n");

    for(i = 0;i<length;i++){
        if(rowLength >= MAXLINESIZE){
            printf("\n");
            rowLength = 0;
        }else{
            printf("%c",*(str+i));
            rowLength++;
        }
        
    }
    
}

int alphaNumerics_count(char* str,int lenght){
    int i;
    int alphaNumerics = 0;
    for(i = 0;i<lenght;i++){
        if((*(str+i) >= '0' && *(str+i) <= '9') || (*(str+i) >= 'A' && *(str+i) <= 'Z') || (*(str+i) >= 'a' && *(str+i) <= 'z')){
            alphaNumerics++;
        }
    }
    return alphaNumerics;
}

void print_alphaNumeric_amount(char* str,int length){
    printf("you entered %d chars\n%d of the chars are alphaNumerics",length,alphaNumerics_count(str,length));
}

