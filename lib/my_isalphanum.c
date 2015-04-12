/*
** my_isalphanum.c for my_isalphanum in /home/pain_f/rendu/Fonctions_Librairie
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Thu Mar 26 18:55:17 2015 francois pain
** Last update Fri Mar 27 10:42:36 2015 francois pain
*/

int	my_isalphanum(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else if (c >= 'a' && c <= 'z')
    return (1);
  else if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
