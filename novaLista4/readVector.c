# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

void getFirstValidChar(char *const);

bool checkFirstValidChar(const char);

void determineSign(char *const, signed char *const);

unsigned char charToDigit(const char);

void buildInt(char *const, int *const);

bool checkLastChar(const char);

bool readInt(int *const);

int main() {
    int x;
    
    puts("Digite um Número:");
    readInt(&x);
    
    printf("Número: %d", x);
    
    return 0;
}

void getFirstValidChar(char *const ptr) {
    while ((*ptr = getchar()) == ' ' || *ptr == '\n' || *ptr == EOF);
}

bool checkFirstValidChar(const char c) {
    return isdigit(c) || c == '-';   
}

void determineSign(char *const ptr_c, signed char *const ptr_sign) {
    if (ptr_c != '-') { *ptr_sign = 1; }

    *ptr_sign = -1;
}

unsigned char charToDigit(const char c) {
    return isdigit(c) ? c - '0' : 10;
}

void buildInt(char *const ptr_c, int *const ptr_x) {
    if (*ptr_c == '-') { *ptr_c = getchar(); }

    while (isdigit(*ptr_c)) { 
     *x = (*ptr_c - '0'); 
        c = getchar();
    }
}

bool readInt(int *const ptr) {
    char c;
    signed char sign;
    int x = 0;
    
    getFirstValidChar(&c);
       
    if (!checkFirstValidChar(c)) { return false; }
    
    determineSign(&c, &sign);
    
    if (c != ' ' && c != '\n') { return false; }
    
    *ptr = number;
    
    return true;
    
}