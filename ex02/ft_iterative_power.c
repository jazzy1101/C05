/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:29:28 by darambae          #+#    #+#             */
/*   Updated: 2023/09/02 21:37:27 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{

	printf("%d\n", ft_iterative_power(0, 4));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(-1, 4));
	printf("%d\n", ft_iterative_power(2, 4));
	return (0);
}
*/
