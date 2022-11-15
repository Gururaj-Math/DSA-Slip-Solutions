// B) Write a ‘C’ program to accept and sort n elements in ascending order by using bubble sort.

#include <stdio.h>
int main()
{
  int number;
  printf("Number of elements in array: ");
  scanf("%d", &number);

  int array[number];

  printf("Enter elements in array: ");
  for (int i = 0; i < number; i++)
  {
    scanf("%d", &array[i]);
  }

  int count = 1;

  while(count < number)
  {
    for(int i = 0;i<number-count;i++)
    {
      if(array[i] > array[i+1]){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
      }
    }
    count++;
  }

  printf("\n Sorted array \n");
  for (int i = 0; i < count; i++)
  {
    printf("%d\t", array[i]);
  }

  return 0;
}