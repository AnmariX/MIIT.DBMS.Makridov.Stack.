#include <iostream>
#include "../Domain/Polygon.h"

/**
*
*/int main()
{
	try
	{
		Polygon polygon(2.0, 4);
		auto polygon1 = new Polygon(1,4);
		std::cout << polygon.GetArea() << "." << polygon << std::endl;
		std::cout << polygon1->GetPerimetr() << std::endl;
		delete polygon1;

		//Polygon polygon2 = 2;

		return 0;
	}
	catch (std::out_of_range& ex)
	{
		std::cerr << ex.what();
	}
	return 0;
}