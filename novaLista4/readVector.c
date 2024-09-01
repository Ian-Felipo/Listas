# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

void getFirstValidChar(char *const);

bool checkFirstValidChar(const char);

void determineSign(char *const, signed char *const);

void buildNumber(char *const, int *const);

bool checkFirstValidChar(const char);

bool readInt(int *const);

int main() {
    int x;
    
    puts("Digite um Número:");
    readInt(&x);
    
    printf("Número: %d", x);
    
    return 0;
}

char getFirstValidChar(char *const ptr); {
    while ((*ptr = getchar()) == ' ' || *ptr == '\n' || *ptr == EOF);
}

bool checkFirstValidChar(const char c) {
    return !isdigit(c) && c != '-';   
}

void determineSign(char *const ptr_c, signed char *const ptr_sign) {
    if (c == '-') { 
        *ptr_sign = -1;
        *ptr_c = getchar();
    }
}

void buildNumber(char *const ptr_c, int *const ptr_x) {
    while (isdigit(c)) { 
     * number + (c - '0'); 
        c = getchar();
    }
}

bool readInt(int *const ptr) {
    char c;
    signed char sign = 1;
    int number = 0;
    
    getFirstValidChar(&c);
       
    if (checkFirstValidChar(c)) { return false; }
    

    
    if (c != ' ' && c != '\n') { return false; }
    
    *ptr = number;
    
    return true;
    
}