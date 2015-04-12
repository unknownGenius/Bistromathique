/*
** my_swap.c for my_swap in /home/pain_f/rendu/Piscine_C_J04
** 
** Made by francois pain
** Login   <pain_f@epitech.net>
** 
** Started on  Thu Mar  5 18:48:03 2015 francois pain
** Last update Fri Mar 27 09:49:02 2015 francois pain
*/

int	my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
  return (0);
}
