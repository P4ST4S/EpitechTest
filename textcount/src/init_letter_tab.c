/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 21:57:13
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 12:15:07
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "init_letter_tab.h"
#include <stdio.h>

int
init_letter_tab (char *s, char **letterTab)
{
  int loop = 0, len = 0;
  bool verif[127];

  (*letterTab) = malloc (sizeof (char));
  if (!(*letterTab))
    {
      write (2, "textcount: malloc() of letterTab failed\n", 41);
      return (-1);
    }
  while (loop < 127)
    verif[loop++] = false;
  loop = 0;
  while (s[loop] != '\0')
    {
      if (verif[(int)s[loop]] == false)
        {
          verif[(int)s[loop]] = true;
          (*letterTab) = realloc ((*letterTab), sizeof (char) * (len + 1));
          if (!(*letterTab))
            {
              write (2, "textcount: realloc() of letterTab failed\n", 40);
              return (-1);
            }
          (*letterTab)[len] = s[loop];
          len++;
        }
      loop++;
    }
  (*letterTab) = realloc ((*letterTab), sizeof (char) * (len + 1));
  if (!(*letterTab))
    {
      write (2, "textcount: realloc() of letterTab failed\n", 40);
      return (-1);
    }
  (*letterTab)[len] = '\0';
  return (len);
}