/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/pain_f/rendu/Fonctions_Librairie
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Thu Mar 26 15:46:36 2015 francois pain
** Last update Fri Mar 27 16:40:01 2015 francois pain
*/

#include "include/my.h"
#include <stdlib.h>

int	my_count_words(char *str)
{
  int	nbw;
  int	i;

  nbw = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (my_isalphanum(str[i]) == 1)
	{
	  while (my_isalphanum(str[i]) == 1)
	    i = i + 1;
	  nbw = nbw + 1;
	}
      else
	i = i + 1;
    }
  return (nbw);
}

int	my_greatest_word(char *str)
{
  int	i;
  int	sw;
  int	gw;

  i = 0;
  sw = 0;
  gw = 0;
  while (str[i] != '\0')
    {
      if (my_isalphanum(str[i]) == 1)
	{
	  while (my_isalphanum(str[i]) == 1)
	    {
	      i = i + 1;
	      sw = sw + 1;
	    }
	}
      else
	i = i + 1;
      if (sw > gw)
	gw = sw;
      sw = 0;
    }
  return (gw);
}

char	**my_cpy_words_in_tab(char **tab, char *str, int nbw)
{
  int	x;
  int	y;
  int	i;

  i = 0;
  x = 0;
  y = 0;
  my_putchar('a');
  while (x < nbw)
    {
      tab[x] = malloc(nbw);
      if (tab[x] == NULL)
	my_putchar('b');
	return (0);
      while (my_isalphanum(str[i]) == 1)
	{
	  tab[x][y] = str[i];
	  i = i + 1;
	  y = y + 1;
	}
      while (my_isalphanum(str[i]) == 0)
	i = i + 1;
      x = x + 1;
      y = 0;
    }
  tab[x][y] = 0;
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  int	nbw;
  int	gw;
  char	**wtab;
  if (str == 0)
    return (0);
  nbw = my_count_words(str) + 1;
  wtab = malloc(sizeof(nbw));
  if (wtab == NULL)
    return (0);
  gw = my_greatest_word(str);
  wtab = my_cpy_words_in_tab(wtab, str, nbw);
  return (wtab);
}

int	main(int argc, char **argv)
{
  my_show_wordtab(my_str_to_wordtab(argv[1]));
}
