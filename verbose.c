/*
** verbose.c for  in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Mon Jan  6 17:40:15 2014 broggi_t
** Last update Mon Jan  6 20:16:46 2014 broggi_t
*/

#include "push_swap.h"
#include "my_str.h"

int			my_verbose(t_list **l_a, t_list **l_b,
				   char *op, int verbose)
{
  static unsigned int	i = 0;

  if (i && !verbose)
    my_putchar(' ');
  if (verbose)
    {
      if (i)
	my_putchar('\n');
      my_putstr("-----\n\033[35mOperation n°");
      my_putnbr(i + 1);
      my_putstr("\033[0m\n");
      my_putstr(op);
      my_putstr(" :\n");
      my_putstr("\033[32ml_a -> \033[0m");
      my_print_list(l_a);
      my_putstr("\n\033[33ml_b -> \033[0m");
      my_print_list(l_b);
    }
  else
    my_putstr(op);
  i++;
  return (i);
}
