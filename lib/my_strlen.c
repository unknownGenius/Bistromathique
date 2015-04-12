/*
** my_strlen.c for my_strlen in /home/pain_f/rendu/Piscine_C_J04
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Fri Mar  6 10:08:48 2015 francois pain
** Last update Fri Mar 27 09:37:21 2015 francois pain
*/

int	my_strlen(char *str)
{
  int c;

  c = 0;
  while (*str != '\0')
    {
      str = str + 1;
      c = c + 1;
    }
  return (c);
}
