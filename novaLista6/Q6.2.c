# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define MAX_ORDER_NUMBER 999999

typedef struct {
    char *part_name;
    unsigned part_number;
    unsigned order_number;
    float price; 
} stock;

int main(int argc, char *argv[]) {
    char *endptr;
    stock x;

    if (argc != 4) { abort(); }

    srand(time(NULL));

    x.part_name = *(argv + 1);
    x.part_number = strtoul(*(argv + 2), &endptr, 10);
    x.order_number = rand() % MAX_ORDER_NUMBER;
    x.price = atof(*(argv + 3));

    puts("\nPart Information\n");
    puts("=========================================");
    printf("\nName: %s\n", x.part_name);
    printf("\nNumber: %u\n", x.part_number);
    printf("\nOrder Number: %u\n", x.order_number);
    printf("\nPrice: %.2f\n", x.price);

    return 0;
}