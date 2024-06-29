/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:13:26 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 12:28:03 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	*div;
	int	*mod;

	x = 5;
	y = 2;
	div = &x;
	mod = &y;

	ft_div_mod(x, y, div, mod);
	printf("%d\n", x);
	printf("%d\n", y);
}*/
