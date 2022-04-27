#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

#include "define.h"
#include "cuboid.cpp"
#include "cube.cpp"

void choice(std::string type);
void choiceAgain(std::string againType);

int temp;

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
		switch (choice)
	    {
		case 1:
	        std::cout << "面积:" << cubo->getCuboidArea() << std::endl;
			break;
	    case 2:
			std::cout << "表面积:" << cubo->getCuboidSurfaceArea() << std::endl;
			break;
		case 3:
			std::cout << "体积:" << cubo->getCuboidSize() << std::endl;
			break;
		default:
		    std::cout << "输入的选择不存在";
			break;
		}
	}
	if (type == "cube")
	{
		cube *Cube = new cube();

		long double a{};
		int choice{};

		std::cout << "请输入长:";
	    std::cin >> a;
		Cube->setCube(a);

		std::cout << "请输入你的选择:\n"
				  << "(1):求面积 (2):求表面积 (3):求体积\n";
		std::cin >> choice;
		switch (choice)
	    {
		case 1:
	        std::cout << "面积:" << Cube->getCubeArea() << std::endl;
			break;
	    case 2:
			std::cout << "表面积:" << Cube->getCubeSurfaceArea() << std::endl;
			break;
		case 3:
			std::cout << "体积:" << Cube->getCubeSize() << std::endl;
			break;
		default:
		    std::cout << "输入的选择不存在";
			break;
		}
	}

    std::cout << "是否要退出程序?\n";
    std::cout << "(1):退出 (2):继续\n";
	std::cin >> temp;
	if (temp == 2)
	{
		std::cout << "请输入你的选择\n"
			<< "(1):长方体 (2):正方体\n";
		std::cin >> temp;
		if (temp == 1)
		{
			choiceAgain("cuboid");
		}
		if (temp == 2)
		{
			choiceAgain("cube");
		}
	}
}

void choiceAgain(std::string againType)
{
	choice(againType);
}