#include <stdio.h>

int main() {
 int n = 100; 
 float arr[n];
 float sum = 0, highest_Cgpa = 0, lowest_Cgpa = 999999;

 int grtr_than_3 = 0,   highest_Cgpa_Count = 0;

 for (int i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
    // if Cgpa is greater than 3.00 than sum it and count it
    if (arr[i]> 3.00)
    {
        sum += arr[i];
        grtr_than_3++;

    }
    
    // finding highest Cgpa
    if (highest_Cgpa < arr[i])
    {
        highest_Cgpa = arr[i];
        highest_Cgpa_Count = 1;
    }else if (highest_Cgpa == arr[i]) // finding how many students have highest Cgpa
    {
        highest_Cgpa_Count++;
    }

    // finding lowest Cgpa
    if (lowest_Cgpa > arr[i])
    {
        lowest_Cgpa = arr[i];
    }
    
    
 }
  
 float avg = sum / grtr_than_3;


    return 0;
}