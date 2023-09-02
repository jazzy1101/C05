/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:06:18 by darambae          #+#    #+#             */
/*   Updated: 2023/09/02 22:29:04 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while(i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("ft_sqrt(0): %d", ft_sqrt(0));
	printf("ft_sqrt(1) :%d", ft_sqrt(1));
	printf("ft_sqrt(-2): %d", ft_sqrt(-2));
	printf("ft_sqrt(9): %d", ft_sqrt(9));
	return (0);
}
*/
