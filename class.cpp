#include <cmath>
#include "define.h"
#pragma once

class solidShape
{
public:
	solidShape()
	{
		a, b, h = 0;
	}

	solidShape(general_a length, general_a width, general_a height)
	{
		a = length;
		b = width;
		h = height;
	}

	solidShape(general_a length)
	{
		a = length;
	}

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

	void setCube(general_a a)
	{
		a = a;
	}

protected:
	general_a a;
	general_a b;
	general_a h;
};

class cube : public solidShape
{
public:

	general_a getCubeArea()
	{
		return pow(a, 2);
	}

	general_a getCubeSurfaceArea()
	{
		return a * 6;
	}

	general_a getCubeSize()
	{
		return pow(a, 3);
	}
};

class cuboid : public solidShape
{
public:

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
};