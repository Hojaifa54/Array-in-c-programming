/*Write a program in C to find the sum of all elements of the array.
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
The sum of your array elements is : 405*/

#include<stdio.h>
int main ()
{
    int n,s=0;
    printf("Enter the number of elements for your array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        s=s+array[i];
    }
    printf("The sum of your array elements is: %d",s);
}
