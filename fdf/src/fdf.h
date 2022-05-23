#ifndef FDF_H
# define FDF_H

#include <stdbool.h>
#include <limits.h>
#include <stdio.h>

typedef struct s_bar
{
    int x;
    int y;
} t_bar;


typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
    void	*mlx;
	void	*mlx_win;
}				t_data;



typedef struct s_dot
{
    int x;
    int y;
} t_dot;

int abs_of_val(int val);

//void	my_mlx_pixel_put(t_data *data, int x, int y, int color);

int	create_trgb(unsigned char t, unsigned char r, unsigned char g, unsigned char b);
unsigned char	get_t(int trgb);
unsigned char	get_r(int trgb);
unsigned char	get_g(int trgb);
unsigned char	get_b(int trgb);
//void trace_line(t_dot a, t_dot b, t_data img);
//int line_direction(int delta, int val);
//void case_one_draw_line(t_dot a, t_dot b, t_data img);
//////void case_two_draw_line(t_dot a, t_dot b, t_data img);


# endif
