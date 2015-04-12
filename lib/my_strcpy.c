/*
** my_strcpy.c for my_strcpy in /home/pain_f/rendu/Piscine_C_J06
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Mon Mar  9 12:54:27 2015 francois pain
** Last update Mon Mar  9 14:18:53 2015 francois pain
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
    dest[i] = '\0';
  return (dest);
}
