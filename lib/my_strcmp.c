/*
** my_strcmp.c for my_strcmp in /home/pain_f/rendu/Piscine_C_J06/ex_05
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 16:18:53 2015 francois pain
** Last update Tue Mar 10 19:33:43 2015 francois pain
*/

int	my_strcmp(char *s1, char *s2)
{
  int	b;

  b = 0;
  while (s1[b] != '\0' && s2[b] != '\0')
    {
      if (s1[b] != s2[b])
	{
	  return (s1[b] - s2[b]);
	}
      b = b + 1;
    }
  return (0);
}
