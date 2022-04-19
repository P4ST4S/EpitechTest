/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-19 11:20:15
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 11:21:52
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "is_number.h"

int
is_number (char const **argv)
{
  int loop = 0, loopBig = 1;

  while (loopBig < 3)
    {
      while (argv[loopBig][loop] != '\0')
        {
          if (argv[loopBig][loop] < '0' || argv[loopBig][loop] > '9')
            return (84);
          loop++;
        }
      loopBig++;
    }
  return (0);
}