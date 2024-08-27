/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:00:48 by plinhare          #+#    #+#             */
/*   Updated: 2024/08/07 18:49:34 by plinhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a = 12;
	int b = 5;

	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);

	printf("Division is %d, Leftover is %d\n", div, mod);

	return(0);
}*/
