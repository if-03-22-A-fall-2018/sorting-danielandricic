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

static clock_t start, end;

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
  return (float) (end - start) / CLOCKS_PER_SEC;
}
