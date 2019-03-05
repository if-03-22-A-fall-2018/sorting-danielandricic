/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <time.h>
#include <stdlib.h>
#include <cstdio>

void 	init_random (int *array, unsigned long length)
{
  srand(time(NULL));
  for (unsigned long i = 0; i < length; i++)
  {
    int n = rand();
    array[i] = n;
  }
}

void 	bubble_sort (int *array, unsigned long length)
{
  unsigned long i,j;
  int temp;
  i = length;
  if(i > 0)
  {
    for (j = 0; j < length - 1; j++)
    {
      if(array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
    bubble_sort(array, length - 1);
  }
}

void 	insertion_sort (int *array, unsigned long length)
{
  unsigned long i,j;
  int temp;
  for (i = 0; i < length; i++)
  {
    j = i;

    while((array[j] < array[j - 1]) && j > 0)
    {
      temp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = temp;
      j--;
    }
  }
}
