/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:51:05 by plinhare          #+#    #+#             */
/*   Updated: 2024/08/13 10:48:16 by plinhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char a = '0';
	char b;
	char c;

	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			}
				if (a == c && a == b && b == c)
				{
				c++;
				}
		}
		b++;	
	}
	a++;
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
