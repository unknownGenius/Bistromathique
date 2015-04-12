/*
** my_putstr.c for my_putstr in /home/pain_f/rendu/Piscine_C_J04
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Thu Mar  5 21:37:15 2015 francois pain
** Last update Fri Mar 27 09:20:47 2015 francois pain
*/

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
  return (0);
}
