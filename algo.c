/*
** algo.c for push_swap in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 28 11:11:18 2013 broggi_t
** Last update Mon Jan  6 19:46:41 2014 broggi_t
*/

#include "push_swap.h"

void		my_algo(t_list **l_a, t_list **l_b, int order, int verbose)
{
  while (!is_empty(*l_a))
    {
      if ((is_highest(l_a, (*l_a)->nb) && order == DESCENDING) ||
	  (is_smallest(l_a, (*l_a)->nb) && order == ASCENDING))
	pb(l_a, l_b, verbose);
      else
	ra(l_a, l_b, verbose);
    }
  while (!is_empty(*l_b))
    {
      pa(l_a, l_b, verbose);
    }
}
