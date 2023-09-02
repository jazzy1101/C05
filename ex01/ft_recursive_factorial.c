/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:02:39 by darambae          #+#    #+#             */
/*   Updated: 2023/09/02 21:26:53 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!nb || nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int     main()
{
        printf("%d\n", ft_recursive_factorial(-3));
        printf("%d\n", ft_recursive_factorial(3));
        printf("%d\n", ft_recursive_factorial(1));

        return (0);
}
*/
