
#include "../libft/libft.h"
#include "../include/fdf.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}



void trace_line(t_dot a, t_dot b, t_data img)
{
	int dx;
	int dy;

	dx = b.x - a.x;
	dy = b.y - a.y;
	if (dx != 0)
	{
		if (dx > 0)
		{
			if (dy != 0)
			{
				if (dy > 0)
				{
					if(dx >= dy)
					{
						int e;
						e = dx;

						dx = e * 2;
						dy = dy * 2;
						my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
						while (a.x != b.x)
						{
							e = e - dy;
							if ( e < 0)
							{
								a.y++;
								e = e + dx;
								my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
							}
					
						}
					}
					else
					{
						int e;
						e = dy;

						dy = e * 2;
						dx = dx * 2;
						my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
						while (a.y != b.y)
						{
							e = e - dx;
							if (e < 0)
							{
								a.x++;
								e = e + dy;
								my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
							}
							
						}
						
					}
				}
			}
		}
	}

}

/*
void trace_line(t_dot a, t_dot b, t_data img)
{
	int dx;
	int dy;
	int p;
	int l;

	dx = b.x - a.x;
	dy = b.y - a.y;
	p = 2 * dy - dx;
	l = dx - 1;

	
	while(a.x <= b.x)
	{
		my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
		if (p < 0)
		{
			p = p + 2 * dy;
			a.x++;
			my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
		}
		 if (p >= 0)
		{
			p = p + 2 * dy - 2 * dx;
			a.x++;
			a.y++;
			my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
		}
		if (a.x == b.x)
		{
			b.y++;
			my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
		}
	}
}


void trace_line(t_dot a, t_dot b, t_data img)
{
	int dx;
	int dy;
	int er;

	er = b.x - a.x;
	dx = er * 2;
	dy = (b.y - a.y) * 2;
	while (a.x <= b.x) 
	{
		
		my_mlx_pixel_put(&img, a.x, a.y, 0x00FF0000);
		a.x = a.x + 1;
		if ((er = er - dy) <= 0)
		{
			a.y = a.y + 1;
			er = er + dx;
			
		}
		a.x++;
	}
}*/