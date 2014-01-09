/*
** my_list.c for my_ls in /home/broggi_t/ls
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sun Dec  1 12:57:25 2013 broggi_t
** Last update Thu Jan  9 15:13:13 2014 broggi_t
*/

#include <stdlib.h>
#include "push_swap.h"

void		free_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (list != NULL)
    {
      list = list->next;
      free(tmp);
      tmp = list;
    }
}
