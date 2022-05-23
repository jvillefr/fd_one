
#include "../libft/libft.h"
#include "../include/fdf.h"

int abs_of_val(int val)
{
    if (val < 0)
        val = -val;
    return (val);
}
/*
int line_direction(int delta, int val)
{
	int *p;
	p = &val;

    if (delta < 0)
	{
		*p = *p - 1;
	}
	else
	{
		*p = *p + 1;
	}
	return (*p);
}

void trace_line(t_dot a, t_dot b, t_data img)
{
	int dx;
	int dy;

	dx = b.x - a.x;
	dy = b.y - a.y;
	//my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);

	if(abs_of_val(dx) > abs_of_val(dy))
	{
		case_one_draw_line( a, b, img);
	}
	else
	{
		case_two_draw_line(a, b, img);
	}
}

void case_one_draw_line(t_dot a, t_dot b, t_data img)
{
    int dx;
	int dy;
	int i;
	int d;

	dx = b.x - a.x;
	dy = b.y - a.y;
	i = abs_of_val(dx);
    d = 2 * abs_of_val(dy) - abs_of_val(dx);
	while (i > 0)
	{
		a.x = line_direction(dx, a.x);
		if(d < 0)
		{
			d = d + 2 * abs_of_val(dy);
		}
		else
		{
			a.y = line_direction(dy, a.y);
			d = d + (2 * abs_of_val(dy) - 2 * abs_of_val(dx));
		}
			//my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
			i--;
		}
}

void case_two_draw_line(t_dot a, t_dot b, t_data img)
{
    int dx;
	int dy;
	int d;
	int i;

	
	dx = b.x - a.x;
	dy = b.y - a.y;
	i = abs_of_val(dy);
    d = 2 * abs_of_val(dx) - abs_of_val(dy);
	while( i > 0)
	{
		a.y = line_direction(dy, a.y);
		if(d < 0)
		{
			d = d + 2 * abs_of_val(dx);
		}
		else
		{
			a.x = line_direction(dx, a.x);
			d = d + (2 * abs_of_val(dx)) - (2 * abs_of_val(dy));
		}
		my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
		i--;
	}
} */