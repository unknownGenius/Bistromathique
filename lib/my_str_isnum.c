/*
** my_str_isnum.c for my_str_isnum in /home/pain_f/rendu/Piscine_C_J06/ex_11
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 23:09:23 2015 francois pain
** Last update Fri Mar 27 09:56:08 2015 francois pain
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= '9' && str[i] >= '0')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
