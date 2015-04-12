/*
** my_str_isupper.c for my_str_isupper in /home/pain_f/rendu/Piscine_C_J06/ex_13
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 23:18:18 2015 francois pain
** Last update Fri Mar 27 09:51:55 2015 francois pain
*/

int     my_str_isupper(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 'Z' && str[i] >= 'A')
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
