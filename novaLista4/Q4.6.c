# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define SIZE 100

unsigned countString(char *);

bool copyString(char *, char *, unsigned);

int main() {
    char *originalString = "Ian Felippo Nascimento Oliveira\0";
    char destinationString[SIZE] = "String Vazia\0"; 

    printf("\nPrimeira String: %s\n", originalString);
    printf("\nSegunda String: %s\n", destinationString);

    puts("\n**************************************************************************");

    if (!copyString(originalString, destinationString, SIZE)) { abort(); }

    printf("\nPrimeira String: %s\n", originalString);
    printf("\nSegunda String: %s\n", destinationString);

    return 0;
}

unsigned countString(char *string) {
    unsigned size = 0;

    while (*(string + size++) != '\0');

    return size;
}

bool copyString(char *originalString, char *destinationString, unsigned sizeDestinationString) {  
    unsigned sizeOriginalString = countString(originalString);

    if (sizeOriginalString > sizeDestinationString) { return false; }

    for (register unsigned i = 0; i < sizeOriginalString; i++) { *(destinationString + i) = *(originalString + i); }

    return true;
}