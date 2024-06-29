/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:12:48 by rathonka          #+#    #+#             */
/*   Updated: 2024/06/12 17:23:13 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "map.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		t_Map	*map;

		map = read_map(argv[i]);
		if (!map)
		{
			printf("Failed to read map from file %s\n", argv[i]);
			printf("\n");
			continue ;
		}
		find_and_mark_largest_square(map);
		printf("Successfully read map from file %s\n", argv[i]);
		display_map(map);
		printf("\n");
		j = 0;
		while (j < map->height)
		{
			free(map->map[j]);
			j++;
		}
		free(map->map);
		free(map);
		i++;
	}
	return (0);
}
