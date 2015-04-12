/*
** my_strstr.c for my_strstr in /home/pain_f/rendu/Piscine_C_J06/ex_04
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Mon Mar  9 18:05:30 2015 francois pain
** Last update Fri Mar 27 09:47:47 2015 francois pain
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[n])
	{
	  n = n + 1;
	}
      else
	{
	  n = 0;
	}
      if (!to_find[n])
	{
	  i = i - (n - 1);
	  return (str + 1);
	}
      i = i + 1;
    }
  return (0);
}
