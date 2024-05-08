#include "../../inc/push_swap.h"

static void	swap(t_stack_node **head) //swap top 2 nodes
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next; //new head
	(*head)->prev->prev = *head; //make the old head's prev the new head
	(*head)->prev->next = (*head)->next; //old head's next points to 3rd node
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev; //3rd node's prev points to old head
	(*head)->next = (*head)->prev; //pointer to old head goes from prev to next
	(*head)->prev = NULL;
}

void	sa(t_stack_node	**a, bool print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack_node **b, bool print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}