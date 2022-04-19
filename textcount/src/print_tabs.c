/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 22:49:48
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 14:36:23
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "print_tabs.h"

void
print_tabs (int *countTab, char *letterTab, char *beginID)
{
  int loop = 0;

  while (letterTab[loop] != '\0')
    {
      if (beginID)
        {
          if (init_count_tab (beginID, letterTab[loop]) > 0)
            printf ("%c:%d\n", letterTab[loop], countTab[loop]);
        }
      else
        printf ("%c:%d\n", letterTab[loop], countTab[loop]);
      loop++;
    }
}