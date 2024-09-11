# include <stdio.h>
# include <stdlib.h>

# define MAX_STRING_SIZE 100

void _shiftStringLeft(char *, unsigned);

void shiftStringLeft(char *, unsigned);

void removeNewline(char *);

void countString(char *, unsigned *);

int main() {
    char string[MAX_STRING_SIZE];
    unsigned size;

    puts("\nEnter a string:\n");

    fgets(string, MAX_STRING_SIZE, stdin);

    removeNewline(string);

    countString(string, &size);

    printf("\nString: %s\n", string);

    printf("String size: %u\n", size);

    return 0;
}

void _shiftStringLeft(char *string, unsigned startingIndex) {
    *(string + startingIndex) = *(string + startingIndex + 1);
    
    if (*(string + startingIndex) == '\0') {
        *(string + startingIndex + 1) = ' ';
        return;
    }
    
    _shiftStringLeft(string, startingIndex + 1);
}

void shiftStringLeft(char *string, unsigned startingIndex) {
    if (*(string + startingIndex) == '\0') { return; }

    _shiftStringLeft(string, startingIndex);
}

void removeNewline(char *string) {
    register unsigned i = 0;

    while (*(string + i++) != '\0') {
        while (*(string + i - 1) == '\n') { shiftStringLeft(string, i - 1); }
    }
}

void countString(char *string, unsigned *size) {
    *size = 0;

    while (*(string + (*size)++) != '\0');
}

/*

# include <stdio.h>
# include <stdlib.h>

void function(char *string, unsigned startingIndex) {
    if () {  }
    
    while (*(string + startingIndex++) != '\0') { 
       *(string + startingIndex - 1) = *(string + startingIndex);
    }
    
    *(string + startingIndex) = *(string + startingIndex);
} 

int main() {
    char string[100] = "AbAbAbAbAbAbA";
    
    puts(string);
    puts("");
    
    function(string, 0);
    
    puts(string);
    
    return 0;
}

*/