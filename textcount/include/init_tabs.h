/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 21:47:58
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-17 22:30:38
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#pragma once

#include <stdlib.h>
#include <unistd.h>

int init_letter_tab (char *s, char **letterTab);
int init_count_tab (char *s, char token);
char *init_tabs (char *s, int **countTab);