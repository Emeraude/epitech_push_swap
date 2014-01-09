/*
** push_swap.h for push_swap in /home/broggi_t/push_swap
** 
** Made by broggi_t
** Login   <broggi_t@epitech.net>
** 
** Started on  Sat Dec 28 10:18:57 2013 broggi_t
** Last update Mon Jan  6 22:22:29 2014 broggi_t
*/

#ifndef PUSH_SWAP_H_
# define PUSH_SWAP_H_

# define ASCENDING	101
# define DESCENDING	102

typedef struct	s_list
{
  int		nb;
  struct s_list	*prev;
  struct s_list	*next;
}		t_list;

int		my_put_in_list(t_list **list, int nb);
void		my_print_list(t_list **list);
int		is_empty(t_list *list);
int		is_smallest(t_list **list, int nb);
int		is_highest(t_list **list, int nb);

void		free_list(t_list *list);

void		my_algo(t_list **l_a, t_list **l_b, int order, int verbose);

int		my_verbose(t_list **l_a, t_list **l_b, char *op, int verbose);

int		my_getnbr(char *str);

void		sa(t_list **l_a, t_list **l_b, int verbose);
void		sb(t_list **l_a, t_list **l_b, int verbose);
void		ss(t_list **l_a, t_list **l_b, int verbose);

void		pa(t_list **l_a, t_list **l_b, int verbose);
void		pb(t_list **l_a, t_list **l_b, int verbose);

void		ra(t_list **l_a, t_list **l_b, int verbose);
void		rb(t_list **l_a, t_list **l_b, int verbose);
void		rr(t_list **l_a, t_list **l_b, int verbose);

void		rra(t_list **l_a, t_list **l_b, int verbose);
void		rrb(t_list **l_a, t_list **l_b, int verbose);
void		rrr(t_list **l_a, t_list **l_b, int verbose);

#endif /* !PUSH_SWAP_H_ */
