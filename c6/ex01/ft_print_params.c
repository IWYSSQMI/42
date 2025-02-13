/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:53:12 by pretch            #+#    #+#             */
/*   Updated: 2024/06/05 19:53:13 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	p;

	p = 1;
	if (argc > 1)
	{
		while (p < argc)
		{
			i = 0;
			while (argv[p][i] != '\0')
				write(1, &argv[p][i++], 1);
			write(1, "\n", 1);
			p++;
		}
	}
}