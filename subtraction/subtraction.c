/*
** subtraction.c for subtraction expr in /home/mathie_g/Tek_1_projects/C_prog_elem/Bistromathique/subtraction
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Tue Mar 31 12:14:47 2015 killian mathieu
** Last update Wed Apr  8 21:10:58 2015 killian mathieu
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/my_ops.h"
#include "struct_sub.h"

int	sub_expr(char *nb1, char *nb2)
{
  sub_list.size;

  size1 = my_strlen(nb1);
  size2 = my_strlen(nb2);
  size_result = size2 > size1 ? size2 : size1;
  result = malloc(sizeof(size_result));
  if (result == NULL)
    {
      my_putstr("could not alloc\n");
      return (1);
    }
  c = size_result - 1;
  result[size_result] = '\0';
  if (size1 < size2)
    {
      my_putchar('-');
      sub_expr(nb2, nb1);
      return (0);
    }
  while (c >= 0)
    {
      if (size2 <= 0 && size1 > 0)
	  res = nb1[size1 - 1];	  
      else if (size1 <= 0 && size2 <= 0)
	  res = 0 + 48;
      else
	{
	  if (nb1[size1 - 1] > nb2[size2 - 1])
	    res = (nb1[size1 -1] - nb2[size2 - 1]) + 48;
	  else if (nb1[size1 - 1] < nb2[size2 - 1])
	    {
	      nb1[size1 - 2] = nb1[size1 - 2] - 1;
	      nb1[size1 - 1] = nb1[size1 - 1] + 10;
	      res = (nb1[size1 - 1] - nb2[size2 - 1]) + 48;
	    }
	  else if (nb1[size1 - 1] == nb2[size2 - 1])
	    res = 0 + 48;
	}
      result[c] = res;
      size1 = size1 - 1;
      size2 = size2 - 1;
      c = c - 1;
    }
  while (result[0] == '0' && result[1] != '\0')
    {
      c = 0;
      while (result[size_result - 1] != '\0')
	{
	  result[c] = result[c + 1];
	  c = c + 1;
	}
      size_result = size_result - 1;
    }
  my_putstr(result);
  my_putchar ('\n');
  return (0);
}

int	main(int argc, char **argv)
{
  sub_expr(argv[1], argv[2]);
}
