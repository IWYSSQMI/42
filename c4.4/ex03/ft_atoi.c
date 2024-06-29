/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 01:16:40 by pretch            #+#    #+#             */
/*   Updated: 2024/06/03 01:16:41 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nega;
	int	num;

	i = 0;
	num = 0;
	nega = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' d')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nega *= -1;
		else
			nega *= 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (nega * num);
}

/*#include <stdio.h>

int main() {
    printf("%d\n", ft_atoi(" ---+--+1234ab567"));
    printf("%d\n", ft_atoi("   +123"));
    printf("%d\n", ft_atoi("   -123"));
    printf("%d\n", ft_atoi("   --123"));
    printf("%d\n", ft_atoi("123"));
    printf("%d\n", ft_atoi("   123abc")); 
    printf("%d\n", ft_atoi("")); 
    printf("%d\n", ft_atoi("   "));
    return 0;
}
*/