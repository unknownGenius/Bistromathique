/*
** my_str_isprintable.c for my_str_isprintable in /home/pain_f/rendu/Piscine_C_J06/ex_14
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 23:24:37 2015 francois pain
** Last update Fri Mar 27 09:53:46 2015 francois pain
*/

int     my_str_isprintable(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 13 && str[i] >= 7)
        i = i + 1;
      else if (str[i] <= 126 && str[i] >= 32)
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
