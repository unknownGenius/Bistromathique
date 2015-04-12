/*
** my_show_wordtab.c for my_show_wordtab in /home/pain_f/rendu/Fonctions_Librairie
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Fri Mar 27 15:56:58 2015 francois pain
** Last update Fri Mar 27 16:04:10 2015 francois pain
*/

#include "include/my.h"

int	my_show_wordtab(char **tab)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (tab[x] != '\0')
    {
      while (tab[x][y] != '\0')
	{
	  my_putchar(tab[x][y]);
	  y = y + 1;
	}
      my_putchar('\n');
    }
  my_putchar('\n');
  return (0);
}
