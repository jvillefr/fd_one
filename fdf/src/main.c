/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:02:19 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/12 00:46:55 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "../libft/libft.h"
#include "../include/fdf.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>


int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	t_dot a;
	t_dot b;
	
	a.x = 50;
	a.y = 50;
	b.x = 500;
	b.y = 100;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 700, 700, "Hello world!");
	img.img = mlx_new_image(mlx, 700, 700);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	trace_line(a, b, img);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}

/*
int	main(void)
{
	t_vars	vars;
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int bar_one_x;
	int bar_one_y;
	int bar_two_x;
	int bar_two_y;
	int bar_tee_x;
	int bar_tee_y;
	int bar_for_x;
	int bar_for_y;
	int color_one;
	int color_two;
	int color_tee;
	int color_for;


	//int shade_one;

	
	bar_one_y = 100;

	bar_two_y = 100;

	bar_tee_y = 100;

	bar_for_y = 100;

	color_one = create_trgb(0, 0, 255, 255);
	color_two = create_trgb(0, 187, 210, 225);
	color_tee = create_trgb(0, 128, 208, 208);
	color_for = create_trgb(200, 121, 28, 248);
	//add_sha
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 700, 700, "Hello world!");
	img.img = mlx_new_image(mlx, 700, 700);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	
	while (bar_one_y < 600)
	{
		bar_one_x = 100;
		while (bar_one_x < 200)
		{
			my_mlx_pixel_put(&img, bar_one_x, bar_one_y, color_one);
			bar_one_x++;
		} 
		bar_one_y++;
	}

	while (bar_two_y < 600)
	{
		bar_two_x = 200;
		while (bar_two_x < 300)
		{
			my_mlx_pixel_put(&img, bar_two_x, bar_two_y, color_two);
			bar_two_x++;
		} 
		bar_two_y++;
	}

	while (bar_tee_y < 600)
	{
		bar_tee_x = 300;
		while (bar_tee_x < 400)
		{
			my_mlx_pixel_put(&img, bar_tee_x, bar_tee_y, color_tee);
			bar_tee_x++;
		} 
		bar_tee_y++;
	}

	while (bar_for_y < 600)
	{
		bar_for_x = 400;
		while (bar_for_x < 500)
		{
			my_mlx_pixel_put(&img, bar_for_x, bar_for_y, color_for);
			bar_for_x++;
		} 
		bar_for_y++;
	}
	
	

	while (bar_one_x < 600)
		{
			my_mlx_pixel_put(&img, bar_one_x, bar_one_y, 0x006C4D4D);
			bar_one_x++;
		} 
	while (bar_two_x < 600)
	{
		my_mlx_pixel_put(&img, bar_two_x, bar_two_y, 0x00FF0000);
		bar_two_x++;
	}
	while(bar_tee_y < 600)
	{
		my_mlx_pixel_put(&img, bar_tee_x, bar_tee_y, 0x00FF0000);
		bar_tee_y++;
	}
	while(bar_for_y < 601)
	{
		my_mlx_pixel_put(&img, bar_for_x, bar_for_y, 0x00FF0000);
		bar_for_y++;
	}
	
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	
	mlx_loop(mlx); */


