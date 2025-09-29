/*Write a program in C to store elements in an array and print it.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
You entered the following array elements:
100 2 300 1 2*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    printf("You entered the following array elements: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
