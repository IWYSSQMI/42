/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rathonka <rathonka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:32:43 by rathonka          #+#    #+#             */
/*   Updated: 2024/06/12 16:57:53 by rathonka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct	_map
{
	char	**map;
	int		width;
	int		height;
	char	empty;
	char	obstacle;
	char	full;
}	t_Map;

#endif