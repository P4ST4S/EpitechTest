/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 23:23:51
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 12:07:46
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "print_tabs_comma.h"

bool
found_this_count (int *savedCountTab, int countTab, int used)
{
  int loop = 0;

  while (loop < used)
    if (countTab == savedCountTab[loop++])
      return (true);

  return (false);
}

void
print_tabs_comma (int *countTab, char *letterTab, char *beginID)
{
  bool comma;
  int used = 0, loopBig = 0, loop = 0;
  int savedCountTab[217];

  while (loop < 217)
    savedCountTab[loop++] = -1;
  loop = 0;
  while (letterTab[loop] != '\0')
    {
      if (!found_this_count (savedCountTab, countTab[loop], used))
        {
          savedCountTab[used] = countTab[loop];
          used++;
        }
      loop++;
    }
  while (loopBig < used)
    {
      loop = 0;
      comma = false;
      while (letterTab[loop] != '\0')
        {
          if (countTab[loop] == savedCountTab[loopBig]
              && init_count_tab (beginID, letterTab[loop]) > 0)
            {
              if (comma)
                printf (",");
              printf ("%c", letterTab[loop]);
              comma = true;
            }
          loop++;
        }
      if (comma)
        printf (":%d\n", savedCountTab[loopBig]);
      loopBig++;
    }
}