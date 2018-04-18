#include "Rectangle.h"

Rectangle::Rectangle(double xa, double ya, double xb, double yb, double xc, double yc, double xd, double yd) {
	a.setXY(xa, ya);
	b.setXY(xb, yb);
	c.setXY(xc, yc);
	d.setXY(xd, yd);
}
//peremeshenie v dol' osey
Rectangle::Rectangle(double XCenter, double YCenter, double sideA, double sideB) {
	a.getX() = XCenter - sideA / 2;
	a.getY() = YCenter - sideB / 2;

	b.getX() = XCenter - sideA / 2;
	b.getY() = YCenter + sideB / 2;

	c.getX() = XCenter + sideA / 2;
	c.getY() = YCenter + sideB / 2;

	d.getX() = XCenter + sideA / 2;
	d.getY() = YCenter - sideB / 2;
}
//izmenenie razmera Rectangle
void Rectangle::move(char direction, double value) {
	if (direction == 'x' || 'X') {
		a.getX() += value;
		b.getX() += value;
		c.getX() += value;
		d.getX() += value;
	}
	else if (direction == 'y' || 'Y') {
		a.getY() += value;
		b.getY() += value;
		c.getY() += value;
		d.getY() += value;
	}
	else
		std::cerr << "wrong direction" << std::endl;	
}

void Rectangle::coordinates(double XCenter, double YCenter, double sideA, double sideB) {
	a.getX() = XCenter - sideA / 2;
	a.getY() = YCenter - sideB / 2;

	b.getX() = XCenter - sideA / 2;
	b.getY() = YCenter + sideB / 2;

	c.getX() = XCenter + sideA / 2;
	c.getY() = YCenter + sideB / 2;

	d.getX() = XCenter + sideA / 2;
	d.getY() = YCenter - sideB / 2;
}

void Rectangle::resize(double X, double Y) {
	sideA += X;
	sideB += Y;
	coordinates(center.getX(), center.getY(), sideA, sideB);
}