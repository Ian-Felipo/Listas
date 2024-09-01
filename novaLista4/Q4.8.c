# include <stdio.h>
# include <stdlib.h>

unsigned findIndex(char *string, char character, int *error);

char *findAddress(char *string, char character);

int main() {
    char *string = "Ian Felippo Nascimento Oliveira\0";
    char character = 'N';
    char *address = findAddress(string, character);
    int error;

    printf("\nString: %s\n", string);
    printf("\nCaractere: %c\n", character);
    printf("\nÍndice da primeira ocorrência de '%c' na string: %u\n", character, findIndex(string, character, &error));
    printf("\nEndereço de memória da primeira ocorrência de '%c' na string: %p\n", character, address);
    printf("\nCaractere no endereço de memória %p: %c\n", address, *address);

    return 0;
}

unsigned findIndex(char *string, char character, int *error) {
    register unsigned i = 0;

    *error = 0;

    while (*(string + i) != '\0') {
        if (*(string + i++) == character) { return i - 1; }
    }

    *error = 1;

    return 0;
}

char *findAddress(char *string, char character) {
    register unsigned i = 0;

    while (*(string + i) != '\0') {
        if (*(string + i++) == character) { return string + i - 1; }
    }

    return NULL;
}