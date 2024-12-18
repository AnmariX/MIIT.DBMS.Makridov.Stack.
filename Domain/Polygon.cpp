#include <stdexcept>

#include <sstream>
#include "Polygon.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double Polygon::GetPerimetr() const
{
	return this->side * this->num_sides;
}

double Polygon::GetApothem() const
{
	double apothem = side / (2 * tan(M_PI / num_sides));
	return apothem;
}

double Polygon::GetArea() const
{
	return (GetPerimetr() * GetApothem()) / 2;
}

Polygon::Polygon(const double side, const int num_sides)
{
	if (side <= 0)
	{
		throw std::out_of_range("������� �� ����� ���� �������������");
	}
	if (num_sides < 3)
	{
		throw std::out_of_range("���������� ������ ������ ���� >= 3");
	}
	this->side = side;
	this->num_sides = num_sides;
}

std::string Polygon::ToString() const
{

	std::stringstream buffer{};
	buffer << "������� �������������� - " << this->side << "\n"
	<< "���������� ������: " << this->num_sides << "\n"
	<< "��������: " << GetPerimetr() << "\n"
	<< "�������: " << GetArea() << "\n";
	return buffer.str();

}

std::ostream& operator<<(std::ostream& out, const Polygon& polygon)
{
	return out << polygon.ToString();
}
