#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inputFile, *outputFile;
    int number, maxNumber;

    inputFile = fopen("in.txt", "r");
    if (inputFile == NULL)
    {
        printf("Could not open input file.\n");
        return 1;
    }

    maxNumber = 0;

    while (fscanf(inputFile, "%d", &number) != EOF)
    {
        if (number > maxNumber)
        {
            maxNumber = number;
        }
    }

    fclose(inputFile);

    outputFile = fopen("out.txt", "w");
    if (outputFile == NULL)
    {
        printf("Could not open output file.\n");
        return 1;
    }

    fprintf(outputFile, "%d\n", maxNumber);

    fclose(outputFile);

    return 0;
}
