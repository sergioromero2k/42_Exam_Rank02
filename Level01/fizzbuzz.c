/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 04:24:54 by sergio-alej       #+#    #+#             */
/*   Updated: 2025/12/22 19:44:43 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_num(int n)
{
	char	c;

	if (n >= 10)
		put_num(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	fizzbuzz(int len)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else
		{
			put_num(i);
		}
		i++;
		write(1, "\n", 1);
	}
}
int	main(void)
{
	fizzbuzz(100);
}
