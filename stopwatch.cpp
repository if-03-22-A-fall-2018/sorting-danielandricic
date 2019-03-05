/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

static clock_t start, end, total;

void 	start_stopwatch ()
{
   start = clock();
}

void 	stop_stopwatch ()
{
  end = clock();
}

float 	elapsed_time ()
{
  total = (double)(end - start) / CLOCKS_PER_SEC;
  return (double) total;
}
