/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:04:25 by pretch            #+#    #+#             */
/*   Updated: 2024/06/06 00:04:27 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_unique(char *str, char c)
{
	int	count;

	count = 0;
	while (*str != '\0' && count < 2)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count == 1);
}

int	str_is_unique(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		if (!char_is_unique(str, *c))
			return (0);
		c++;
	}
	return (1);
}

int	is_valid_len(char *str)
{
	int	len;

	len = 0;
	if (!str_is_unique(str))
		return (0);
	while (*str != '\0')
	{
		if (*str == '+' || *str == '-')
			return (0);
		len++;
		str++;
	}
	return (len);
}

int	index_of(char *str, char c)
{
	int	index;

	index = 0;
	while (*str != '\0')
	{
		if (*str == c)
			return (index);
		str++;
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	len;
	int	out;

	sign = 1;
	out = 0;
	len = is_valid_len(base);
	if (len < 2)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (index_of(base, *str) >= 0)
	{
		out = out * len + index_of(base, *str);
		str++;
	}
	return (out * sign);
}

// int main(void)
// {
// 	char *nbr = "123";
// 	char *base_from = "0123456789";
// 	char *base_to = "01";
// 	char *str;

// 	str = ft_convert_base(nbr, base_from, base_to);
// 	printf("%s\n", str);
// }