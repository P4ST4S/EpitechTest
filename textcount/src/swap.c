/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 22:39:22
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-17 23:10:31
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "swap.h"

void
swap_char (char *a, char *b)
{
  char c;

  c = *a;
  *a = *b;
  *b = c;
}

void
swap_int (int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
}