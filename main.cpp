#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "define.h"
#include "cuboid.cpp"

cuboid *cubo = new cuboid();

int main()
{
	long double a{};
	long double b{};
	long double h{};
	std::cout << "请输入一个数字:";
	std::cin >> a;
	std::cout << "请输入另一个数字:";
	std::cin >> b;
	std::cout << "请再输入另一个数字:";
	std::cin >>	h;
	cubo->Rectangle3in1(a, b, h);
	std::cout << cubo->getCuboidSize() << "\n";

	system("pause");

	return 0;
}