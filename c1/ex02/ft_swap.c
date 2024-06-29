/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:23:12 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 12:26:10 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;
	
	x = 10;
	y = 14;
	a = &x;
	b = &y;
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}*/
