/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:40:01 by pretch            #+#    #+#             */
/*   Updated: 2024/06/05 15:40:05 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// int ft_sqrt(int nb)
// {
//     int i;

//     i = 1;
//     while (i <= nb / 2)
//     {
//         if (i * i == nb)
//             return (i);
//         i++;
//     }
//     return (0);
// }

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	inx;
	int	guess;

	if (nb <= 0)
		return 0;
	inx = nb;
	guess = (inx + nb / inx) / 2;
	while (inx - guess > 0)
	{
		inx = guess;
		guess = (inx + nb / inx) / 2;
	}
	if (guess * guess == nb)
	{
		return (guess);
	}
	return (0);
}

// int main(void)
// {
//     int n;

// 	n = ft_sqrt(625);
// 	printf("%d", n);
//     return (0);
// }