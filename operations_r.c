/*
** operations_r.c for  in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Mon Jan  6 01:49:24 2014 broggi_t
** Last update Mon Jan  6 19:56:01 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"
#include "my_str.h"

void		r(t_list **l)
{
  t_list	*end;
  t_list	*first;

  if (is_empty(*l) || (*l)->next == NULL)
    return;
  end = *l;
  while (end->next != NULL)
    end = end->next;
  first = *l;
  *l = (*l)->next;
  first->next->prev = NULL;
  first->next = NULL;
  end->next = first;
  first->prev = end;
}

void		ra(t_list **l_a, t_list **l_b, int verbose)
{
  r(l_a);
  my_verbose(l_a, l_b, "ra", verbose);
}

void		rb(t_list **l_a, t_list **l_b, int verbose)
{
  r(l_b);
  my_verbose(l_a, l_b, "rb", verbose);
}

void		rr(t_list **l_a, t_list **l_b, int verbose)
{
  r(l_a);
  r(l_b);
  my_verbose(l_a, l_b, "rr", verbose);
}
