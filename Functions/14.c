#include <math.h>
#include <stdio.h>
void takeInput(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

double Calc_Mean(int arr[], int size)
{

    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

double Calc_Std_deviation(int arr[], int num_of_elem)
{
    double mean = Calc_Mean(arr, num_of_elem);
    double sum = 0;
    double diff = 0.00;

    for (int i = 0; i < num_of_elem; i++)
    {
        diff = arr[i] - mean;
        sum += diff * diff;
    }
    return sqrt(sum / num_of_elem);
}
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    takeInput(arr, n);
    double mean = Calc_Mean(arr, n);

    double std_dev = Calc_Std_deviation(arr, n);

    printf("%.2lf", std_dev);
    return 0;
}