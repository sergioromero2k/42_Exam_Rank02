/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 04:47:41 by sergio-alej       #+#    #+#             */
/*   Updated: 2025/12/13 05:00:32 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exam_rank02.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}

int	main(void)
{
	t_list	*test;
	int		*num;

	num = malloc(sizeof(int));
	if (!num)
		return (EXIT_FAILURE);
	*num = 10;
	test = ft_lstnew(num);
	if (test)
		printf("The value of the nodo %d\n", *(int *)test->content);
}
