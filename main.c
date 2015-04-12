/*
** main.c for main.c in /home/mathie_g/Tek_1_projects/C_prog_elem/Bistromathique
** 
** Made by killian mathieu
** Login   <mathie_g@epitech.net>
** 
** Started on  Wed Apr  8 15:37:20 2015 killian mathieu
** Last update Wed Apr  8 18:20:39 2015 killian mathieu
*/

int	main(int argc, char **argv)
{
  if (argv[2] == "+")
    add_expr(argv[2], argv[3]);
  else if(argv[2] == "-")
    sub_expr(argv[2], argv[3]);
  return (0);
}
