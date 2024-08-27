/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:14:02 by plinhare          #+#    #+#             */
/*   Updated: 2024/08/04 18:39:40 by rimagalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	lin;
	int	col;

	lin = 1;
	col = 1;
	while (lin <= y)
	{
		while (col <= x)
		{
			if ((lin == 1 && col == 1) || (lin == y && col == x))
				ft_putchar('o');
			else if ((lin == y && col == 1) || (lin == 1 && col == x))
				ft_putchar('o');
			else if ((col == 1 || col == x))
				ft_putchar('|');
			else if (lin == 1 || lin == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		lin++;
		col = 1;
		ft_putchar('\n');
	}
}
