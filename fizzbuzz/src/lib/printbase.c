/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-06 15:23:22
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-08 08:26:19
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "printbase.h"

char *
print_base (int num)
{
  static char rpz[] = "0123456789";
  static char buf[50];
  char *ptr;

  ptr = &buf[49];
  *ptr = '\0';
  while (num != 0)
    {
      if (num % 10 >= 0 && num % 10 <= 9)
        *--ptr = rpz[num % 10];
      num /= 10;
    }
  return (ptr);
}