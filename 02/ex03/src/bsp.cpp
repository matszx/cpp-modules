#include "../inc/Point.hpp"

static float	area(Point const a, Point const b, Point const c)
{
	float x1, y1, x2, y2, x3, y3, res;

	x1 = a.getX().toFloat();
	y1 = a.getY().toFloat();
	x2 = b.getX().toFloat();
	y2 = b.getY().toFloat();
	x3 = c.getX().toFloat();
	y3 = c.getY().toFloat();	
	res = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	if (res < 0.0)
		res = -res;
	return (res);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float a1 = area(point, b, c); 
	float a2 = area(a, point, c);
	float a3 = area(a, b, point);

	if (!a1 || !a2 || !a3)
		return (false);
	if (area(a, b, c) != a1 + a2 + a3)
		return (false);
	return (true);
}