/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:53:50 by pretch            #+#    #+#             */
/*   Updated: 2024/06/05 19:53:51 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	*s1_i;
	char	*s2_i;

	s1_i = s1;
	s2_i = s2;
	while (*s1_i && (*s1_i == *s2_i))
	{
		s1_i++;
		s2_i++;
	}
	return (*s1_i - *s2_i);
}

void	print_strs(char **strs, int strc)
{
	int		i;
	int		p;

	i = 1;
	if (strc > 1)
	{
		while (i < strc)
		{
			p = 0;
			while (strs[i][p] != '\0')
				write(1, &strs[i][p++], 1);
			write(1, "\n", 1);
			i++;
		}
	}
}

void	sort_str(char **strs, int strc)
{
	char	*tmp;
	int		i;
	int		p;
	int		diff;

	i = 1;
	while (i < strc)
	{
		p = 1;
		while (p < strc)
		{
			diff = ft_strcmp(strs[p], strs[i]);
			if (diff > 0)
			{
				tmp = strs[p];
				strs[p] = strs[i];
				strs[i] = tmp;
			}
			p++;
		}
		i++;
	}
	return (print_strs(strs, strc));
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		sort_str(argv, argc);
	}
}