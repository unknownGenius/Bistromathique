/*
** my_getnbr.c for my_getnbr in /home/pain_f/rendu/Piscine_C_J07/lib/my
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Wed Mar 11 14:14:28 2015 francois pain
** Last update Tue Mar 31 16:34:35 2015 francois pain
*/

int	my_getnbr(char *str)
{
  int	i;
  int	r;

  r = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	r = r * 10 + (str[i] - 48);
      i = i + 1;
      if (r > 2147483647 || r < -2147483648)
	return (0);
    }
  if (str[0] == '-')
    r = r * (-1);
  return (r);
}
