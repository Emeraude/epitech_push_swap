/*
** operations_rr.c for  in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Mon Jan  6 02:09:02 2014 broggi_t
** Last update Thu Jan  9 15:11:58 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"
#include "my_str.h"

void		rr_(t_list **l)
{
  t_list	*end;
  t_list	*first;

  if (is_empty(*l) || (*l)->next == NULL)
    return;
  end = *l;
  while (end->next != NULL)
    end = end->next;
  first = *l;
  end->prev->next = NULL;
  end->prev = NULL;
  end->next = first;
  first->prev = end;
  *l = end;
}

void		rra(t_list **l_a, t_list **l_b, int verbose)
{
  rr_(l_a);
  my_verbose(l_a, l_b, "rra", verbose);
}

void		rrb(t_list **l_a, t_list **l_b, int verbose)
{
  rr_(l_b);
  my_verbose(l_a, l_b, "rrb", verbose);
}

void		rrr(t_list **l_a, t_list **l_b, int verbose)
{
  rr_(l_a);
  rr_(l_b);
  my_verbose(l_a, l_b, "rrr", verbose);
}
