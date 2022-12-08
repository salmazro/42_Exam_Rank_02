#include "ft_list.h"

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}

// void	print_data(void *data)
// {
// 	printf("%s\n", data);
// }

// int	main(void)
// {
//     t_list *list = malloc(sizeof(t_list));
//     list -> data = "C sucks";
//     list -> next = malloc(sizeof(t_list));
//     list -> next -> data = "42 ad";
//     list -> next -> next = malloc(sizeof(t_list));
//     list -> next -> next -> data = "Meera";
//     list -> next -> next -> next = malloc(sizeof(t_list));
//     list -> next -> next -> next -> data = "Hi";
//     list -> next -> next -> next -> next = NULL;
//     ft_list_remove_if(&list, "C sucks", &cmp);
//     print_data(list);
// }