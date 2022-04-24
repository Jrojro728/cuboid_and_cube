#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "define.h"
#include "cuboid.cpp"

cuboid *cubo = new cuboid();

int main()
{
	uint8_t choice{};
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
	std::cout << "请输入你的选择:\n"
			  << "(1):求面积 (2):求体积\n";
	std::cin >> choice;
	if (choice == 1)
	{
		std::cout << "面积:" << cubo->getCuboidArea();
	}
	else 
	{
		std::cout << "体积:" << cubo->getCuboidSize();
	}

	system("pause");

	return 0;
}