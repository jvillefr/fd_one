/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:02:19 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/23 19:41:32 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "../libft/libft.h"
#include "../include/fdf.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>


enum {
ON_KEYDOWN = 2,
ON_KEYUP = 3,
ON_MOUSEDOWN = 4,
ON_MOUSEUP = 5,
ON_MOUSEMOVE = 6,
ON_EXPOSE = 12,
ON_DESTROY = 17,
K = 0x28,
};

typedef struct	s_vars {
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_vars;

void	my_mlx_pixel_put(t_vars *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}



int	closea(t_vars *vars)
{
	int x;
	int y;

	x = 20;
	y = 20;
	{
		my_mlx_pixel_put(vars, x, y, 0x006C4D4D);
		mlx_put_image_to_window(vars->mlx, vars->win, vars->img, 0, 0);
		x++;
		y++;
	}
	return (0);
}

int bat(int keycode, t_vars *vars)
{
	if(keycode == K)
		{
			mlx_loop_hook(vars->mlx, closea, vars);
		}
	return (0);
}


int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	vars.img = mlx_new_image(vars.mlx, 1920, 1080);
	vars.addr = mlx_get_data_addr(vars.img, &vars.bits_per_pixel, &vars.line_length, &vars.endian);
	my_mlx_pixel_put(&vars, 10, 10, 0x00FF0000);
	mlx_put_image_to_window(vars.mlx, vars.win, vars.img, 0, 0);
	mlx_hook(vars.win, 2, 0, bat, &vars);
	mlx_loop(vars.mlx);
}
