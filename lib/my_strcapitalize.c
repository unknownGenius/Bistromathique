/*
** my_strcapitalize.c for my_strcapitalize in /home/pain_f/rendu/Piscine_C_J06/ex_09
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 18:03:28 2015 francois pain
** Last update Fri Mar 27 09:26:24 2015 francois pain
*/

char    *my_strcapitalize(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    {
      if ('z' >= str[a] && str[a] >= 'a')
	{
	  if ('z' >= str[a - 1] && str[a - 1] >= 'a')
	    a = a + 1;
	  else if ('Z' >= str[a - 1] && str[a - 1] >= 'A')
	    a = a + 1;
	  else if ('9' >= str[a - 1] && str[a - 1] >= '0')
	    a = a + 1;
	  else
	    {
	      str[a] = str[a] - 32;
	      a = a + 1;
	    }
	}
      else
	a = a + 1;
    }
  return (str);
}
