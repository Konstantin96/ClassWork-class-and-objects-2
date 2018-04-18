#pragma once
class Rectangle {
private:
	class Point {
	private:
		double x;
		double y;
	public:
		Point() = default;
		Point(double x, double y) :x(x), y(y) {}
		double getX() { return x; }
		double getY() { return y; }
		void setXY(double x, double y) {
			this->x = x;
			this->y = y;
		}
	}a, b, c, d;
public:
	Rectangle() = default;
	Rectangle(double xa, double ya, double xb, double yb, double xc, double yc, double xd, double yd) {
		a.setXY(xa, ya);
		b.setXY(xb, yb);
		c.setXY(xc, yc);
		d.setXY(xd, yd);
	}
	double getXA() { return a.getX(); }
	double getYA() { return a.getY(); }
	double getXB() { return b.getX(); }
	double getYB() { return b.getY(); }
	double getXC() { return c.getX(); }
	double getYC() { return c.getY(); }
	double getXD() { return d.getX(); }
	double getYD() { return d.getY(); }

};