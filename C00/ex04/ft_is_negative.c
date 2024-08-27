/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:51:05 by plinhare          #+#    #+#             */
/*   Updated: 2024/08/04 10:22:21 by plinhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write (1, &negative, 1);
	}
	else
	{
		write (1, &positive, 1);
	}
}

/*int main(void)
{
	ft_is_negative(6);
	return (0);
}*/
