/*
** operations_s.c for push_swap in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 28 14:35:48 2013 broggi_t
** Last update Mon Jan  6 19:53:19 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"
#include "my_str.h"

void		s(t_list **l)
{
  int		swap;

  if (*l == NULL || (*l)->next == NULL)
    return;
  swap = (*l)->nb;
  (*l)->nb = (*l)->next->nb;
  (*l)->next->nb = swap;
}

void		sa(t_list **l_a, t_list **l_b, int verbose)
{
  s(l_a);
  my_verbose(l_a, l_b, "sa", verbose);
}

void		sb(t_list **l_a, t_list **l_b, int verbose)
{
  s(l_b);
  my_verbose(l_a, l_b, "sb", verbose);
}

void		ss(t_list **l_a, t_list **l_b, int verbose)
{
  s(l_a);
  s(l_b);
  my_verbose(l_a, l_b, "ss", verbose);
}
