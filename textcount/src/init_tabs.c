/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 21:47:42
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-17 22:32:00
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "init_tabs.h"

char *
init_tabs (char *s, int **countTab)
{
  char *letterTab;
  int numberLetter, loop = 0;

  numberLetter = init_letter_tab (s, &letterTab);
  if (numberLetter < 0)
    return (NULL);
  (*countTab) = malloc (sizeof (int) * numberLetter);
  if (!(*countTab))
    {
      write (2, "textcount: malloc() of countTab failed\n", 40);
      return (NULL);
    }
  while (loop < numberLetter)
    {
      (*countTab)[loop] = init_count_tab (s, letterTab[loop]);
      loop++;
    }
  return (letterTab);
}