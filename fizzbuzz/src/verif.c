/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-19 10:50:25
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 11:09:59
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "verif.h"

void
verif (int number)
{
  if (number % 3 == 0)
    {
      if (number % 5 == 0)
        write (1, "FizzBuzz\n", 10);
      else
        write (1, "Fizz\n", 6);
    }
  else if (number % 5 == 0)
    {
      if (number % 3 == 0)
        write (1, "FizzBuzz\n", 10);
      else
        write (1, "Buzz\n", 6);
    }
  else
    {
      write (1, print_base (number), std_strlen (print_base (number)));
      write (1, "\n", 1);
    }
}