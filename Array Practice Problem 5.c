/*Write a program in C to read n number of values in an array and display it in reverse order.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The elements in array are in reverse order:\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
}
