/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 22:27:51
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-17 22:30:24
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "init_count_tab.h"

int
init_count_tab (char *s, char token)
{
  int ret = 0, loop = 0;

  while (s[loop] != '\0')
    if (s[loop++] == token)
      ret++;
  return (ret);
}