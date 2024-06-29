/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 04:02:13 by pretch            #+#    #+#             */
/*   Updated: 2024/06/10 04:02:14 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;

#endif

// #include "ft_point.h"
// void set_point(t_point *point)
// {
//     point->x = 42;
//     point->y = 21;
// }
// int main(void)
// {
//     t_point point;
//     set_point(&point);
//     return (0);
// }