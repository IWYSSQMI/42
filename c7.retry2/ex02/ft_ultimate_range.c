/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:03:37 by pretch            #+#    #+#             */
/*   Updated: 2024/06/06 00:03:39 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

//  int main(void)
//  {
//  	int min = 5;
//  	int max = 15;
//  	int *re;
//  	int i;

//  	i = ft_ultimate_range(&re, min, max);
//  	printf("i = %d || ", i);
//  	i = 0;
//  	while (i < max - min)
//  	{
//  		printf("%d ", re[i]);
//  		i++;
//  	}
//  }