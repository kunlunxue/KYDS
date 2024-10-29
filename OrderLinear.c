#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    //Get access the element of the array
    arr[2] = 10;
    printf("Modified element at index 2:%d\n", arr[2]);
    return 0;
}