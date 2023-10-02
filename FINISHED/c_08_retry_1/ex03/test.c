#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 44;
	point->y = 22;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("x = %i\ny = %i", point.x, point.y);
	return (0);
}
