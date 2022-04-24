#include "define.h"
#pragma once

class cuboid
{
public:
	void Rectangle3in1(Rectangle_a length, Rectangle_a width, Rectangle_a height)
	{
		a = length;
		b = width;
		h = height;
	}

	void setLength(Rectangle_a length)
	{
		a = length;
	}

	void setWidth(Rectangle_a width)
	{
		b = width;
	}

	void setHeight(Rectangle_a height)
	{
		h = height;
	}

	Rectangle_a getCuboidArea()
	{
		return a * b;
	}

	Rectangle_a getCuboidSize()
	{
		return a * b * h;
	}

	Rectangle_a getCuboidSurfaceArea()
	{
		return a * b * 2 + a * h * 2 + b * h * 2;
	}
private:
	Rectangle_a a;
	Rectangle_a b;
	Rectangle_a h;
};