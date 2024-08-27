/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:00:48 by plinhare          #+#    #+#             */
/*   Updated: 2024/08/07 18:59:54 by plinhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int main(void)
{
	int a = 7;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("D: %d R: %d\n", a, b);

	return (0);
}*/
