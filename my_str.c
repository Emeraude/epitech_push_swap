/*
** my_str.c for  in /home/broggi_t/minish
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Wed Dec 18 12:46:25 2013 broggi_t
** Last update Mon Jan  6 14:19:13 2014 broggi_t
*/

#include <unistd.h>
#include "my_str.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

unsigned int	my_strlen(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		my_puterr(char *str)
{
  write(2, str, my_strlen(str));
}

void		my_putnbr(int nbr)
{
  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-');
    }
  if (nbr / 10 > 0)
    my_putnbr(nbr / 10);
  my_putchar(nbr % 10 + 48);
}
