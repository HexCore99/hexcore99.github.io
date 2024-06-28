#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inFile, *outFile;
    int num, sum = 0, count = 0;

    inFile = fopen("Sample.txt", "r");
    if (inFile == NULL)
    {
        printf("Error opening input file!\n");
        return 1;
    }

    while (fscanf(inFile, "%d", &num) != EOF)
    {
        count++;
    }
    rewind(inFile);

    int arr[count];
    int i = 0;
    while (fscanf(inFile, "%d", &num) != EOF)
    {
        arr[i++] = num;
    }

    fclose(inFile);

    for (i = 0; i < count; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 4 == 0)
        {
            sum += arr[i];
        }
    }

    outFile = fopen("Output.txt", "w");
    if (outFile == NULL)
    {
        printf("Error opening output file!\n");
        free(arr);
        return 1;
    }

    fprintf(outFile, "Sum: %d", sum);

    fclose(outFile);

    free(arr);

    return 0;
}