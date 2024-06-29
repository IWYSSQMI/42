/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaewpro <akaewpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:37:56 by akaewpro          #+#    #+#             */
/*   Updated: 2024/06/09 22:48:26 by akaewpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../include/ft.h"

int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
	{
		return (0);
	}
}

int	getmult(int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(int n, t_list *tab, int *first)
{
    int	i;
    int	mult;
    static int isFirstCall = 0;

    i = 0;
    mult = getmult(n);
    if (mult >= 100)
        ft_print(n / mult, tab, first);
    if (*first == 1 && isFirstCall == 0)
        write(1, "", 0);
    *first = 0;
    isFirstCall = 1;
    while (tab[i].nb != mult)
        i++;
    ft_putstr(tab[i].val);
    if (mult != 0 && n % mult != 0)
        ft_print(n % mult, tab, first);
}

int	main(int argc, char *argv[])
{
	t_list		*tab;
	int			*first;
	int			addr_first;

	addr_first = 1;
	first = &addr_first;
	if (handle_argument(argc, argv[1]) == 1)
	{
		tab = process("numbers.dict");
		ft_print(ft_atoi(argv[1]), tab, first);
		free(tab);
		write(1, "\n", 1);
	}
	else if (handle_argument(argc, argv[1]) == 2)
	{
		write(1, "Sorry i can't handle this case", 30);
	}
	else
		write(1, "Error\n", 6);
}
