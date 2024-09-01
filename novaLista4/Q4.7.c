# include <stdio.h>
# include <stdlib.h>

unsigned countString(char *);

char *concatenateStrings(char *, char *);

int main() {
    char *string_1 = "Ian Felippo Nascimento Oliveira e \0";
    char *string_2 = "Daniel Luca Nascimento Oliveira\0";
    char *concatenatedStrings;

    if (!(concatenatedStrings = concatenateStrings(string_1, string_2))) { abort(); }

    printf("\nPrimeira String: %s\n", string_1);
    printf("\nSegunda String: %s\n", string_2);

    puts("\n********************************************************");

    printf("\nStrings Concatenadas: %s\n", concatenatedStrings);

    free(concatenatedStrings);

    return 0;
}

unsigned countString(char *string) {
    unsigned size = 0;

    while (*(string + size++) != '\0');

    return size;
}

char *concatenateStrings(char *string_1, char *string_2) {
    unsigned size_1 = countString(string_1);
    unsigned size_2 = countString(string_2);
    char *concatenatedStrings;

    if (!(concatenatedStrings = calloc(size_1 + size_2 - 1, sizeof(char)))) { return NULL; }

    for (register unsigned i = 0; i < size_1 - 1; i++) { *(concatenatedStrings + i) = *(string_1 + i); }

    for (register unsigned j = 0; j < size_2; j++) { *(concatenatedStrings + size_1 + j - 1) = *(string_2 + j); }

    return concatenatedStrings;
}