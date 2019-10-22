#include <stdio.h>
#include <stdlib.h>
#include <stirbell.h>

int main(int argc, char* argv[])
{
    int input, output;
    if (argc == 1) {
        printf("Enter number of elements in relation\n:");
        if (scanf("%d", &input) != 1) {
            fprintf(stderr, "E:Invalid Input");
        }
    } else {
        input = atoi(argv[1]);
    }

    if (input > -1) {
        output = bellnumber(input);
        printf("Number of equivalence relations: %d\n", output);
    } else {
        fprintf(stderr, "E:Entered negative number\n");
        return 2;
    }

    return 0;
}