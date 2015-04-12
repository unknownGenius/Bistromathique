/*
** my_strupcase.c for my_strupcase in /home/pain_f/rendu/Piscine_C_J06/ex_07
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 17:22:56 2015 francois pain
** Last update Fri Mar 27 09:48:34 2015 francois pain
*/

char	*my_strupcase(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if ('z' >= str[a] && str[a] >= 'a')
	{
	  str[a] = str[a] - 32;
	  a = a + 1;
	}
      else
	{
	  a = a + 1;
	}
    }
  return (str);
}
