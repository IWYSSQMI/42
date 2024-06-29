/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:37:25 by pretch            #+#    #+#             */
/*   Updated: 2024/06/05 16:37:26 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    int i = 2;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

// int main(void)
// {
// 	int	i;

// 	i = ft_is_prime(17);
// 	printf("%d", i);
// }