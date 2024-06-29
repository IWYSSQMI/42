/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:04:25 by pretch            #+#    #+#             */
/*   Updated: 2024/06/05 17:04:26 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return(0);
    int i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return(nb);
}

// int	main(void)
// {
// 	int	n;

// 	n = ft_find_next_prime(10);
// 	printf("%d", n);
// }