#include <stdio.h>

/* C++ Function to print leaders in an array */
void printLeaders(int arr[], int size)
{
    int max_from_right =  arr[size-1];

    /* Rightmost element is always leader */
     printf("%d",max_from_right);
     printf(" ");


    for (int i = size-2; i >= 0; i--)
    {
        if (max_from_right < arr[i])
        {
            max_from_right = arr[i];
            printf("%d",max_from_right);
     		printf(" ");
        }
    }
}

/* Driver program to test above function*/
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}  
