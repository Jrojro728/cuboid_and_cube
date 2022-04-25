#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

#include "define.h"
#include "cuboid.cpp"

void choice(std::string type);

int main()
{
    choice("cuboid");

	system("pause");

	return 0;
}

void choice(std::string type)
{
	if (type == "cuboid")
	{
		cuboid *cubo = new cuboid();

		long double a{};
	    long double b{};
	    long double h{};

		int choice{};

		std::cout << "请输入长:";
	    std::cin >> a;
		std::cout << "请输入宽:";
		std::cin >> b;
		std::cout << "请输入高:";
		std::cin >>	h;
		cubo->Rectangle3in1(a, b, h);
		std::cout << "请输入你的选择:\n"
				  << "(1):求面积 (2):求表面积 (3):求体积\n";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "面积:" << cubo->getCuboidArea() << std::endl;
		}
		if (choice == 2)
		{
			std::cout << "表面积:" << cubo->getCuboidSurfaceArea() << std::endl;
		}
		if (choice == 3)
		{
			std::cout << "体积:" << cubo->getCuboidSize() << std::endl;
		}
	}
	else
	{

	}
}