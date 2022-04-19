/**
 * @ Author: Antoine ROSPARS
 * @ Create Time: 2022-04-17 21:44:58
 * @ Modified by: Antoine ROSPARS
 * @ Modified time: 2022-04-17 23:37:56
 * @ Copyright: Antoine ROSPARS - All Rights Reserved - 2022
 */

#pragma once

#include <stdlib.h>

#include "arguments.h"

char *init_tabs (char *s, int **countTab);
int text (char **argv, t_arg *arg);
void sort_tabs (int **countTab, char **letterTab);
void print_tabs (int *countTab, char *letterTab, char *beginID);
void print_tabs_comma (int *countTab, char *letterTab, char *beginID);
