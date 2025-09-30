/*Write a C program to put even and odd elements of an array in two separate arrays.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int array[n],array1[n],array2[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Even elements: ");
    for(int i=0;i<n;i++)
    {
        if((array[i]%2)==0)
        {
            array1[i]=array[i];
            printf("%d ",array1[i]);
        }
    }
    printf("\nOdd elements: ");
    for(int i=0;i<n;i++)
    {
        if((array[i]%2)!=0)
        {
            array2[i]=array[i];
            printf("%d ",array2[i]);
        }
    }
}
