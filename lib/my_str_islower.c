/*
** my_str_islower.c for my_str_islower in /home/pain_f/rendu/Piscine_C_J06/ex_12
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 23:15:16 2015 francois pain
** Last update Fri Mar 27 09:52:22 2015 francois pain
*/

int     my_str_islower(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 'z' && str[i] >= 'a')
        i = i + 1;
      else
        return (0);
    }
  return (1);
}
