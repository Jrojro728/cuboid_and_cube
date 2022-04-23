#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "define.h"
#include "cuboid.cpp"

cuboid *cubo = new cuboid();

int main()
{
	double a{};
	double b{};
	double h{};
	std::cin >> a;
	std::cin >> b;
	std::cin >>	h;
	cubo->Rectangle3in1(a, b, h);
	std::cout << cubo->getCuboidSize() << "\n";

	system("pause");

	return 0;
}