/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:26:32 by sofgonza          #+#    #+#             */
/*   Updated: 2023/04/03 17:57:34 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*a;

	if (!f || !del || !lst)
		return (NULL);
	first = NULL;
	while (lst)
	{
		a = ((*f)(lst->content));
		new = ft_lstnew(a);
		if (!new || !a)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*
#include <stdio.h>
char *ft_noseque(char *a)
{
	char *b;

	b = ft_strdup(a);
	return (b);
}

void ft_nothing(void *a)
{
	(void) a;
}

void printlist(t_list *head)
{
	if (!head)
		return ;
	printf("%s\n", (char *) head->content);
	printlist(head->next);
}

int	main(void)
{
	t_list *head = ft_lstnew((char *) "a");
	t_list *n1= ft_lstnew((char *) "b");
	t_list *n2 = ft_lstnew((char *) "c");
	t_list *new;

	head->next = n1;
	n1->next = n2;

	new = ft_lstmap(head, &ft_noseque, &ft_nothing);
	//printlist(new);

 }*/
