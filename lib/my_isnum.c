/*
** my_isnum.c for my_isnum in /home/pain_f/rendu/Fonctions_Librairie
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Thu Mar 26 18:51:59 2015 francois pain
** Last update Fri Mar 27 09:49:55 2015 francois pain
*/

int	my_isnum(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
