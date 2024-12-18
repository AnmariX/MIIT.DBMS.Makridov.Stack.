#pragma once
#include <iostream>
/**
* @brief Класс Многоугольник
*/
class Polygon
{
private:
	/**
	* @brief Сторона
	*/
	double side;
	int num_sides;
public:
	/**
	* @brief Рассчитывает периметр.
	* @return периметр.
	*/
	double GetPerimetr()const;
	/**
	* @brief Рассчитывает площадь
	* @return площадь
	*/
	double GetArea()const;
	/**
	* @brief Рассчитывает диагональ.
	* @return диагональ.
	*/
	double GetApothem()const;
	/**
	* @brief Инициализирует новый объект класса Polygon.
	* @param side Сторона.
	*/
	explicit Polygon(const double side);

		std::string ToString() const;
	
		friend std::ostream& operator<<(std::ostream& out, const Polygon& polygon);

};