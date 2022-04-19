/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 22:35:43
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 12:19:26
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "sort_tabs.h"

static void
rec_sort_tabs (int **countTab, char **letterTab, int index)
{
  if ((*letterTab)[index + 1] != '\0')
    {
      if ((*countTab)[index] < (*countTab)[index + 1])
        {
          swap_int (&(*countTab)[index], &(*countTab)[index + 1]);
          swap_char (&(*letterTab)[index], &(*letterTab)[index + 1]);
          rec_sort_tabs (countTab, letterTab, index + 1);
        }
    }
  if (index - 1 != -1)
    {
      if ((*countTab)[index] > (*countTab)[index - 1])
        {
          swap_int (&(*countTab)[index], &(*countTab)[index - 1]);
          swap_char (&(*letterTab)[index], &(*letterTab)[index - 1]);
          rec_sort_tabs (countTab, letterTab, index - 1);
        }
    }
}

void
sort_tabs (int **countTab, char **letterTab)
{
  int loop = 0;

  while ((*letterTab)[loop] != '\0')
    {
      rec_sort_tabs (countTab, letterTab, loop);
      loop++;
    }
}