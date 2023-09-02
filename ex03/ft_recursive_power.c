/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:38:24 by darambae          #+#    #+#             */
/*   Updated: 2023/09/02 21:50:33 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("ft_recursive_power(0, 4):%d\n", ft_recursive_power(0, 4));
	printf("ft_recursive_power(2, 0):%d\n", ft_recursive_power(2, 0));
	printf("ft_recursive_power(2, 4):%d\n", ft_recursive_power(2, 4));
	printf("ft_recursive_power(-3, 4):%d\n", ft_recursive_power(-3, 4));
	return (0);
}
*/
