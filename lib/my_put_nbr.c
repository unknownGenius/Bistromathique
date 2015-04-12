/*
** my_put_nbr.c for my_put_nbr in /home/pain_f/rendu/Piscine_C_J04
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Mon Mar  9 09:34:29 2015 francois pain
** Last update Fri Mar 27 10:48:31 2015 francois pain
*/

int	my_put_nbr(int nb)
{
  int	d;
  int	m;

  d = 1;
  if (nb == 0)
    my_putchar(nb + 48);
  else if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while (d <= nb)
      d = d * 10;
  while (d > 1)
    {
      d = d / 10;
      m = nb % d;
      my_putchar(nb / d + 48);
      nb = m;
    }
  return (0);
}
