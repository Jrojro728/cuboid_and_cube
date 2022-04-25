#include "define.h"
#pragma once

class cuboid
{
public:
	void Rectangle3in1(general_a length, general_a width, general_a height)
	{
		a = length;
		b = width;
		h = height;
	}

	void setLength(general_a length)
	{
		a = length;
	}

	void setWidth(general_a width)
	{
		b = width;
	}

	void setHeight(general_a height)
	{
		h = height;
	}

	general_a getCuboidArea()
	{
		return a * b;
	}

	general_a getCuboidSize()
	{
		return a * b * h;
	}

	general_a getCuboidSurfaceArea()
	{
		return a * b * 2 + a * h * 2 + b * h * 2;
	}
private:
	general_a a;
	general_a b;
	general_a h;
};