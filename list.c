/*
** list.c for push_swap in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 28 10:30:39 2013 broggi_t
** Last update Thu Jan  9 15:12:23 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"
#include "my_str.h"

int		my_put_in_list(t_list **list, int nb)
{
  t_list	*elem;

  elem = malloc(sizeof(t_list));
  if (elem == NULL)
    return (1);
  elem->nb = nb;
  elem->prev = NULL;
  elem->next = *list;
  if (*list != NULL)
    (*list)->prev = elem;
  *list = elem;
  return (0);
}

void		my_print_list(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp != NULL)
    {
      my_putnbr(tmp->nb);
      my_putchar(' ');
      tmp = tmp->next;
    }
}

int		is_empty(t_list *list)
{
  if (list == NULL)
    return (1);
  else
    return (0);
}

int		is_smallest(t_list **list, int nb)
{
  t_list	*tmp;
  int		smallest;

  smallest = nb;
  tmp = *list;
  while (tmp != NULL)
    {
      if (tmp->nb < smallest)
	smallest = tmp->nb;
      tmp = tmp->next;
    }
  return ((smallest == nb));
}

int		is_highest(t_list **list, int nb)
{
  t_list	*tmp;
  int		highest;

  highest = nb;
  tmp = *list;
  while (tmp != NULL)
    {
      if (tmp->nb > highest)
	highest = tmp->nb;
      tmp = tmp->next;
    }
  return ((highest == nb));
}
