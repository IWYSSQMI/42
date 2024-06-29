/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:42:54 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/24 18:50:08 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printff(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483647)
	{
		printff(nb);
	}
	if (nb < 0)
	{
		printff('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		printff(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

/*int	main(void)
{
	ft_putnbr(9);
}*/
