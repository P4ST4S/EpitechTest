/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-16 18:27:52
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-18 00:09:34
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "main.h"

int
main (int argc, char **argv)
{
  t_arg arg;

  arg.beginID = -1;
  if (argc < 2)
    {
      write (2, "textcount: need arguments\n", 27);
      return (84);
    }
  arg.beginID = 1;
  arg.t = false;
  arg.r = false;
  if (strcmp (argv[1], "-r") == 0)
    {
      arg.beginID = 2;
      arg.r = true;
      if (strcmp (argv[2], "-t") == 0)
        {
          arg.t = true;
          arg.beginID = 3;
        }
    }
  else if (strcmp (argv[1], "-t") == 0)
    {
      arg.beginID = 2;
      arg.t = true;
      if (strcmp (argv[2], "-r") == 0)
        {
          arg.r = true;
          arg.beginID = 3;
        }
    }
  return (text (argv, &arg));
}
