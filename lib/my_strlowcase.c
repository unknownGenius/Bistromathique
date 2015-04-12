/*
** my_strlowcase.c for my_strlowcase in /home/pain_f/rendu/Piscine_C_J06/ex_08
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 17:56:45 2015 francois pain
** Last update Fri Mar 27 09:38:37 2015 francois pain
*/

char    *my_strlowcase(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      if ('Z' >= str[a] && str[a] >= 'A')
        {
          str[a] = str[a] + 32;
          a = a + 1;
        }
      else
	a = a + 1;
    }
  return (str);
}
