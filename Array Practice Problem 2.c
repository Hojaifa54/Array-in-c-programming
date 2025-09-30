/*Write a program in C to copy the elements of one array into another array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
The elements in array are as follows:
100 2 300 1 2*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int array1[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    int array2[n];
    printf("The elements in array are as follows: \n");
    for(int i=0;i<n;i++)
    {
        array2[i]=array1[i];
        printf("%d ",array2[i]);
    }
}
