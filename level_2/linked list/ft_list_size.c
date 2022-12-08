#include "ft_list.h"

int	ft_lst_size(t_list *lst)
{
	int	a = 0;
	while (lst)
	{
		a++;
		lst = lst->next;
	}
	return (a);
}