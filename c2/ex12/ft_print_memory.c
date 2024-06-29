/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:25:33 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/29 15:32:56 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printff(char c)
{
	write(1, &c, 1);
}

void	get_hex_1(int hex_1, int hex_2, int j)
{
	int	hex_3;

	hex_1 += 48;
	hex_2 += 48;
	hex_3 = hex_2 + 39;
	if (j % 2 == 0)
	{
		printff(' ');
		printff(hex_1);
		printff(hex_2);
	}
	else
	{
		printff(hex_1);
		printff(hex_2);
	}
}

void	get_hex_2(int hex_1, int hex_2, int j)
{
	hex_1 += 48;
	hex_2 += 87;
	if (j % 2 == 0)
	{
		printff(' ');
		printff(hex_1);
		printff(hex_2);
	}
	else
	{
		printff(hex_1);
		printff(hex_2);
	}
}

void	ft_printhex(char *str)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	hex1;
	unsigned int	hex2;

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i];
		hex1 = str[i] / 16;
		hex2 = str[i] % 16;
		if (hex2 < 10)
		{
			get_hex_1(hex1, hex2, i);
		}
		else
		{
			get_hex_2(hex1, hex2, i);
		}
		i++;
	}
}

void	print_address(void *addr)
{
	char	addr_hex[16];
	long	addr_l;
	int		i;

	i = 0;
	addr_l = (long)addr;
	while (addr_l > 0)
	{
		addr_hex[i] = addr_l % 16;
		if (addr_hex[i] < 10)
			addr_hex[i] += '0';
		else
			addr_hex[i] += 87;
		addr_l /= 16;
		i++;
	}
	while (i < 16)
	{
		addr_hex[i] = '0';
		i++;
	}
	while (i > 0)
	{
		i--;
		printff(addr_hex[i]);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	num;
	unsigned int	offset;
	unsigned int	i;
	char			*addr_ch;

	addr_ch = (char *)addr;
	i = 0;
	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			num = 16;
			size -= 16;
		}
		else
			num = size;
		size = 0;
		print_address(addr + offset);
		printff(':');
		printff(' ');
		offset += 16;
	}
	return (addr);
}

/*int	main(void)
{
	int		i = 0;
	char	str[] = "Bonjour les amin";
	
	ft_print_memory(str, 16);
	ft_printhex(str);
	printff(' ');
	write(1, &str, 20);
}*/
