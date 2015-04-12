/*
** my_revstr.c for my_revstr in /home/pain_f/rendu/Piscine_C_J06/ex_03
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Mon Mar  9 15:19:47 2015 francois pain
** Last update Fri Mar 27 09:22:49 2015 francois pain
*/

char	*my_revstr(char *str)
{
  int a;
  int b;
  int c;

  b = 0;
  while (str[b] != '\0')
    {
      b = b + 1;
    }
  b = b - 1;
  a = 0;
  while (b > a)
    {
      c = str[a];
      str[a] = str[b];
      str[b] = c;
      a = a + 1;
      b = b - 1;
    }
  return (str);
}
