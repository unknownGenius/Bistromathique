/*
** my_str_isalpha.c for my_str_isalpha in /home/pain_f/rendu/Piscine_C_J06/ex_10
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 22:48:13 2015 francois pain
** Last update Tue Mar 10 23:03:36 2015 francois pain
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 122 && str[i] >= 97)
	i = i + 1;
      else if (str[i] <= 90 && str[i] >= 65)
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
