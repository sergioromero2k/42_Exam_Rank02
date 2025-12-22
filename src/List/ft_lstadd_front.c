/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 23:45:14 by sergio-alej       #+#    #+#             */
/*   Updated: 2025/12/13 23:57:54 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exam_rank02.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list *lst = NULL;
	t_list a;
	t_list b;

	a.content = 1;
	b.content = 2;

	a.next = NULL;
	b.next = NULL;

	ft_lstadd_front(&lst, &a);
	ft_lstadd_front(&lst, &b);

	return (0);
}