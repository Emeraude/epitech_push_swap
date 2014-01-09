/*
** main.c for push_swap in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 28 10:23:20 2013 broggi_t
** Last update Mon Jan  6 22:21:21 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"
#include "my_str.h"

int		my_params_in_list(int ac, char **av,
				  t_list **list, int *verbose)
{
  int		order;

  order = ASCENDING;
  while (ac > 1)
    {
      if (my_strcmp(av[ac - 1], "-r") || my_strcmp(av[ac - 1] , "--reverse"))
	order = DESCENDING;
      else if (my_strcmp(av[ac - 1], "-v") ||
	       my_strcmp(av[ac - 1], "--verbose"))
	*verbose = 1;
      else if (my_put_in_list(list, my_getnbr(av[ac - 1])))
	return (1);
      ac--;
    }
  return (order);
}

int		main(int ac, char **av)
{
  t_list	*l_a;
  t_list	*l_b;
  int		order;
  int		verbose;

  verbose = 0;
  l_a = NULL;
  l_b = NULL;
  if (ac)
    {
      if ((order = my_params_in_list(ac, av, &l_a, &verbose)) == 1)
	return (1);
      my_algo(&l_a, &l_b, order, verbose);
    }
  my_putchar('\n');
  free_list(l_a);
  return (0);
}
