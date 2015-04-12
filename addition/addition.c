/*
** add_expr.c for bistro in /home/pain_f/rendu/Bistromathique
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 31 11:29:52 2015 francois pain
** Last update Wed Apr  8 16:16:33 2015 killian mathieu
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/my_ops.h"

int    	add_expr(char *nb1, char *nb2)
{
  int  	size1;
  int  	size2;
  int	size;
  int	res;
  int	rtn;
  int	cur_nbr;
  char	*str;
  char *str2;


  if (nb1 == NULL || nb2 == NULL)
    {
      my_putstr("error: missing argument for addition expression\n");
      return (1);
    }
  size1 = my_strlen(nb1);
  size2 = my_strlen(nb2);
  size = size2 > size1 ? size2 : size1;
  str = malloc(sizeof(size + 1));
  if (str == NULL)
    {
      my_putstr("could not alloc\n");
      return (1);
    }
  str[size + 1] = '\0';
  while (size >= 0)
    {
      if (size1 <= 0 && size2 > 0)
	res = CHAR_INT(nb2[size2 - 1]);
      else if (size2 <= 0 && size1 > 0)
	res = CHAR_INT(nb1[size1 - 1]);
      else if (size1 <= 0 && size2 <= 0)
	res = 0;
      else
        res = CHAR_INT(nb1[size1 - 1]) + CHAR_INT(nb2[size2 - 1]);
      cur_nbr = res % 10 + rtn;
      str[size] = INT_CHAR(cur_nbr);
      rtn = res / 10;
      size1 = size1 - 1;
      size2 = size2 - 1;
      size = size - 1;
    }
  if (str[0] == '0' && str[1] != '\0')
    {
      size = 0;
      while (str[size] != '\0')
	{
	  str[size] = str[size + 1];
	  size = size + 1;
	}
    }
  my_putstr(str);
  free(str);
  return (0);
}
