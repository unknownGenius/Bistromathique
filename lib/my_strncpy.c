/*
** my_strncpy.c for my_strncpy in /home/pain_f/rendu/Piscine_C_J06
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Mon Mar  9 14:19:20 2015 francois pain
** Last update Fri Mar 27 09:41:55 2015 francois pain
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  dest[n] = '\0';
  while (n >= 0)
    {
      n = n - 1;
      dest[n] = src[n];
    }
  return (dest);
}
