/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-19 10:46:58
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-19 11:19:15
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#include "main.h"

int
main (int argc, char const *argv[])
{
  int nbrOne, nbrTwo, loop;

  if (argc < 3)
    {
      write (2, "Error: need 2 numbers for arguments\n", 37);
      return (84);
    }
  if (is_number (argv) == 84)
    {
      write (2, "Error: write numbers\n", 22);
      return (84);
    }
  nbrOne = atoi (argv[1]);
  nbrTwo = atoi (argv[2]);
  if (nbrOne > nbrTwo)
    {
      write (
          2,
          "Error: the second parameter must be greater than, the first one\n",
          65);
      return (84);
    }
  loop = nbrOne;
  while (loop != nbrTwo + 1)
    verif (loop++);
  return (0);
}
