/*
** operations_p.c for push_swap in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 28 15:13:52 2013 broggi_t
** Last update Mon Jan  6 19:54:06 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"
#include "my_str.h"

void		p(t_list **l_a, t_list **l_b)
{
  t_list	*swap;

  if (is_empty(*l_a))
    return;
  swap = *l_a;
  if ((*l_a)->next != NULL)
    (*l_a)->next->prev = NULL;
  *l_a = (*l_a)->next;
  swap->next = *l_b;
  if (!is_empty(*l_b))
    (*l_b)->prev = swap;
  *l_b = swap;
}

void		pa(t_list **l_a, t_list **l_b, int verbose)
{
  p(l_b, l_a);
  my_verbose(l_a, l_b, "pa", verbose);
}

void		pb(t_list **l_a, t_list **l_b, int verbose)
{
  p(l_a, l_b);
  my_verbose(l_a, l_b, "pb", verbose);
}
