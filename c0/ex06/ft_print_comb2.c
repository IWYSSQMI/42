/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:01:41 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/24 18:46:30 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnum(char x, char y)
{
	write(1, &x, 1);
	write(1, &y, 1);
}

void	checkround(int num, int max)
{
	char	r;
	char	m;

	if (num <= 9)
	{
		r = num + 48;
		printnum('0', r);
	}
	else if (num <= max)
	{
		r = (num % 10) + 48;
		m = (num / 10) + 48;
		printnum(m, r);
	}
}

void	checknum(int fir, int sec)
{
	checkround(fir, 98);
	write(1, " ", 1);
	checkround(sec, 99);
	if (fir != 98 || sec != 99)
	{
		printnum(',', ' ');
	}
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			checknum(a, b);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
