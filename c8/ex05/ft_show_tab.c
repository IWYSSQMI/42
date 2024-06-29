/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 04:03:26 by pretch            #+#    #+#             */
/*   Updated: 2024/06/10 04:03:27 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// int	ft_strlen(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i])
//         i++;
//     return (i);
// }

// char	*ft_strdup(char *src)
// {
//     char	*dest;
//     int		i;

//     dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
//     if (dest == NULL)
//         return (NULL);
//     i = 0;
//     while (src[i])
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return (dest);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
//     t_stock_str		*tab;
//     int				i;

//     tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
//     if (tab == NULL)
//         return (NULL);
//     i = 0;
//     while (i < ac)
//     {
//         tab[i].size = ft_strlen(av[i]);
//         tab[i].str = av[i];
//         tab[i].copy = ft_strdup(av[i]);
//         i++;
//     }
//     tab[i].str = 0;
//     return (tab);
// }

// int main ()
// {
// 	t_stock_str *dest;
// 	char		*src[4];
// 	int			size;

// 	size = 3;
// 	src[0] = "AEYAEYA";
// 	src[1] = "IMALITTLE";
// 	src[2] = "BUTTERFLY";

// 	dest = ft_strs_to_tab(size, src);
// 	ft_show_tab(dest);
// 	free(dest);
// }
