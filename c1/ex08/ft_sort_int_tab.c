/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:57:32 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/27 12:29:54 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	change(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			change(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*void	printarray(int *tab, int size)
{
	int	n;

	n = 0;
	while (n < size)
	{
		printf("%d", tab[n]);
		n++;
	}
}

int	main(void)
{
	int	arr[] = {0,4,2,3,6,1};
	int	size = 6;
	
	ft_sort_int_tab(arr, size);
	printarray(arr, size);
	return 0;
}*/
