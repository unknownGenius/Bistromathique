/*
** my_isalpha.c for my_isalpha in /home/pain_f/rendu/Fonctions_Librairie
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Thu Mar 26 18:08:57 2015 francois pain
** Last update Fri Mar 27 09:49:26 2015 francois pain
*/

int	my_isalpha(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}
