/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:31:50 by pretch            #+#    #+#             */
/*   Updated: 2024/06/12 17:16:22 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "map.h"

t_Map *read_map(char *filename)
{
    int i;
    int j;
    char line[100];
    FILE *file;
    t_Map *map;

    file = fopen(filename, "r");
	if (!file)
	{
		return NULL;
	}

    map = malloc(sizeof(t_Map));
	if (!map)
	{
		fclose(file);
		return NULL;
	}

	if (fscanf(file, "%d%c%c%c\n", &map->height, &map->empty, &map->obstacle, &map->full) != 4)
	{
		free(map);
		fclose(file);
		return NULL;
	}

	map->map = malloc(map->height * sizeof(char *));
	if (!map->map)
	{
		free(map);
		fclose(file);
		return NULL;
	}

	i = 0;
	while (i < map->height)
	{
		if (!fgets(line, sizeof(line), file))
		{
			j = 0;
			while (j < i)
			{
				free(map->map[j++]);
			}
			free(map->map);
			free(map);
			fclose(file);
			return NULL;
		}

		map->width = strlen(line) - 1;
		map->map[i] = malloc(map->width * sizeof(char));
		if (!map->map[i])
		{
			int j = 0;
			while (j < i)
			{
				free(map->map[j]);
				j++;
			}
			free(map->map);
			free(map);
			fclose(file);
			return NULL;
		}

		strncpy(map->map[i], line, map->width);
		i++;
	}
	fclose(file);
	return map;
}

void	display_map(t_Map *map)
{
	int	i;
    int j;

    i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			write(1, &map->map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	min(int a, int b, int c)
{
	if (a < b)
	{
        if (a < c)
            return a;
        else
            return (b < c) ? b : c;
	}
	else
	{
		if (b < c)
            return b;
        else
            return c;
	}
}

void	find_and_mark_largest_square(t_Map *map)
{
	int	**squares;
	int i;
    int j;
    int max_size;
    int max_i;
    int max_j;

    i = 0;
    squares = malloc(map->height * sizeof(int *));
	while (i < map->height)
	{
		squares[i] = malloc(map->width * sizeof(int));
		i++;
	}

	max_size = 0;
	max_i = 0;
	max_j = 0;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
    	{
			if (i == 0 || j == 0 || map->map[i][j] == map->obstacle)
			{
                if (map->map[i][j] == map->obstacle)
                    squares[i][j] = 0;
                else
                    squares[i][j] = 1;
			}
			else
				squares[i][j] = 1 + min(squares[i - 1][j], squares[i][j - 1], squares[i - 1][j - 1]);
			if (squares[i][j] > max_size)
			{
				max_size = squares[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	i = max_i - max_size + 1;
	while (i <= max_i)
	{
		j = max_j - max_size + 1;
		while (j <= max_j)
		{
			map->map[i][j] = map->full;
			j++;
		}
		i++;
	}

	i = 0;
	while (i < map->height)
		free(squares[i++]);
	free(squares);
}