/*Write a program in C that will  reverse an array..
Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2
Output:
Your array after reversing:
2 1 300 2 100*/

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number of elements for your array: ");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  int array1[n],array2[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&array1[i]);
  }
  printf("Your array after reversing:\n");
  for(int i=0;i<n;i++)
  {
      array2[i]=array1[n-1-i];
      printf("%d ",array2[i]);
  }

}
