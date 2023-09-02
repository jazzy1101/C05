/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:38:21 by darambae          #+#    #+#             */
/*   Updated: 2023/09/02 21:23:56 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	res = 1;
	if (!nb || (nb < 0))
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_iterative_factorial(-5));
	printf("%d", ft_iterative_factorial(4));
	return (0);
}
*/
