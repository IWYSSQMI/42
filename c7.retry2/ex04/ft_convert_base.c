/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 02:35:15 by pretch            #+#    #+#             */
/*   Updated: 2024/06/10 02:35:16 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	char_is_unique(char *str, char c);
int	str_is_unique(char *str);
int	is_valid_len(char *str);

long	my_pow(int base, int exp)
{
	if (exp < 1)
		return (1);
	return (base * my_pow(base, exp - 1));
}

int	num_len(int num, int base_len)
{
	int	pos;

	pos = 0;
	if (num > 0)
		num = -num;
	else
		pos++;
	while (num + my_pow(base_len, pos + 1) <= 0)
		pos++;
	return (pos);
}

char	*num_to_char_base(int num, char *base, int base_len)
{
	int		i;
	int		pos;
	char	*out;

	i = 0;
	if (num == 0)
	{
		out = malloc(sizeof(char) * 2);
		out[0] = base[0];
		out[1] = '\0';
		return (out);
	}
	pos = num_len(num, base_len);
	out = malloc(sizeof(char) * (pos + 1));
	if (num < 0)
		out[i++] = '-';
	else
		num = -num;
	while (pos >= 0)
		out[i++] = *(base - (num / my_pow(base_len, pos--) % base_len));
	out[i] = '\0';
	return (out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		len;

	len = is_valid_len(base_to);
	if (len < 2 || is_valid_len(base_from) < 2)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	return (num_to_char_base(num, base_to, len));
}
