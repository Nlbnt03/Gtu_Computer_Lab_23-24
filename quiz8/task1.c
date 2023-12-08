#include <stdio.h>
int str_len(int *arr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return (i);
}
int *swapElements(int *arr,int index1,int index2)
{
    int tmp;
    int *ptr;
    if ((index1 >= 0 || index1 < str_len(arr)) && (index2 >= 0 || index2 < str_len(arr)))
    {
        tmp = *(ptr + index1);
        *(ptr + index1) = *(ptr + index2);
        *(ptr + index2) = tmp;
    }
    return (arr);
}
int swapElements2(int *arr, int size, int index1, int index2)
{
    int tmp;
    if ((index1 >= 0 && index1 < size) && (index2 >= 0 && index2 < size))
    {
        tmp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = tmp;
    }
    return *arr;
}
int main()
{
    int arr[] = {10,25,48,97,-4};
    int index1,index2;
    printf("Enter the indices to swap (separated by space)\n");
    scanf("%d %d",&index1,&index2);
    swapElements2(arr,5,index1,index2);
    for (int i = 0; i < str_len(arr); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}