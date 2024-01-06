/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:06:03 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/06 22:54:39 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# define H	1900
# define V	1200

typedef	struct s_bres
{
	int	dx;
	int	dy;
	int	sx;
	int	err;
	int	err2;
}				t_bres;

typedef	struct s_point
{
	int		x;
	int		y;
	int		value;
	int		color;
}			t_point;







#endif