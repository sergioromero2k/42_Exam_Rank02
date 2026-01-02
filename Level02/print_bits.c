/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio-alejandro <sergio-alejandro@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:55:59 by sergio-alej       #+#    #+#             */
/*   Updated: 2025/12/27 21:41:09 by sergio-alej      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* void	print_bits(unsigned char octet)
{
	int	num;

	write(1, "0000", 4);
	num = octet - '0';
	while (num != 0)
	{
		num = (num % 2) + '0';
		write(1, &num, 1);
		num = (num - '0') / 2;
	}
} */
int	main(void)
{
	unsigned char x = 2;      // 00000010 en binario
	unsigned char y = x << 1; // Desplaza 1 a la izquierda → 00000100
	printf("%d\n", y);        // 4
}
