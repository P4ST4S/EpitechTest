/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 21:44:52
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 14:34:41
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "text.h"
#include <stdio.h>

int
text (char **argv, t_arg *arg)
{
  int *countTab;
  char *letterTab;

  letterTab = init_tabs (argv[arg->beginID], &countTab);
  if (!letterTab)
    return (84);
  if (arg->t)
    sort_tabs (&countTab, &letterTab);
  if (argv[arg->beginID + 1] != NULL)
    {
      if (arg->r)
        print_tabs_comma (countTab, letterTab, argv[arg->beginID + 1]);
      else
        print_tabs (countTab, letterTab, argv[arg->beginID + 1]);
    }
  else
    {
      if (arg->r)
        print_tabs_comma (countTab, letterTab, argv[arg->beginID]);
      else
        print_tabs (countTab, letterTab, argv[arg->beginID]);
    }
  free (letterTab);
  free (countTab);
  return (0);
}