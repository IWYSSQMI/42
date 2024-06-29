/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 01:17:20 by pretch            #+#    #+#             */
/*   Updated: 2024/06/03 01:17:21 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int	convert(char *str, int i, char *base)
{
	int	stob;
	int	base_len;

	stob = 0;
	base_len = ft_strlen(base);
	while (str[i] != '\0')
	{
		if (base_index(str[i], base) == -1)
			break ;
		stob = (stob * base_len) + base_index(str[i], base);
		i++;
	}
	return (stob);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	nega;

	i = 0;
	nega = 0;
	sign = 1;
	if (str == 0 || base == 0)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nega++;
		i++;
	}
	if (nega % 2 == 1)
		sign = -1;
	if (valid(base) == 0)
		return (0);
	res = convert(str, i, base);
	return (res * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi_base("1f", "012345679abcdef"));
	printf("%d\n", ft_atoi_base("	+++++---101010", "01"));
}*/