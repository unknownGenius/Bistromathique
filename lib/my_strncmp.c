/*
** my_strncmp.c for my_strncmp in /home/pain_f/rendu/Piscine_C_J06
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Tue Mar 10 16:46:26 2015 francois pain
** Last update Fri Mar 27 09:39:28 2015 francois pain
*/

int     my_strncmp(char *s1, char *s2, int n)
{
  int   b;

  b = 0;
  while (s1[b] != '\0' && s2[b] != '\0' && b < n)
    {
      if (s1[b] != s2[b])
	return (s1[b] - s2[b]);
      b = b + 1;
    }
  return (0);
}
