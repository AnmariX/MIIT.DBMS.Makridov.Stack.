#pragma once
#include <iostream>
/**
* @brief ����� �������������
*/
class Polygon
{
private:
	/**
	* @brief �������
	*/
	double side;
	int num_sides;
public:
	/**
	* @brief ������������ ��������.
	* @return ��������.
	*/
	double GetPerimetr()const;
	/**
	* @brief ������������ �������
	* @return �������
	*/
	double GetArea()const;
	/**
	* @brief ������������ ���������.
	* @return ���������.
	*/
	double GetApothem()const;
	/**
	* @brief �������������� ����� ������ ������ Polygon.
	* @param side �������.
	*/
	explicit Polygon(const double side);

		std::string ToString() const;
	
		friend std::ostream& operator<<(std::ostream& out, const Polygon& polygon);

};