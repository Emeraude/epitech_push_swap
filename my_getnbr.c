/*
** my_getnbr.c for my_getnbr in /home/broggi_t/tmp/Piscine-C-Jour_04
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Thu Oct  3 18:42:28 2013 broggi_t
** Last update Sat Dec 28 11:08:39 2013 broggi_t
*/

#include "push_swap.h"

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int   neg;

  i = 0;
  nb = 0;
  neg = 1;
  while (str[i])
    {
      if (str[i] == '-')
	neg *= -1;
      else if (str[i] >= '0' && str[i] <= '9')
	{
	  if (nb > (nb * 10 + (str[i] - 48)))
	    return (0);
	  nb = nb * 10 + str[i] - 48;
	}
      else if (str[i] != '+')
	return (nb * neg);
      i++;
    }
  return (nb * neg);
}
