
#include "Vector3D.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;
Vector3D::Vector3D()
	: x(0), y(0), z(0)
{}

Vector3D::Vector3D(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3D::Vector3D(const Vector3D& t)
{
	this->x = t.x;
	this->y = t.y;
	this->z = t.z;

}
istream& operator >> (istream& in, Vector3D& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;
	cout << "z = "; in >> a.z;

	return in;
}
Vector3D::operator string() const
{
	stringstream sout;
	sout << "(" << this->x << "; " << this->y << ";" << this->z << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, Vector3D& a)
{
	out << string(a) << endl;
	return out;
}
Vector3D& Vector3D::operator ++()
{
	x++;
	y++;
	z++;
	return *this;
}

Vector3D& Vector3D::operator --()
{
	x--;
	y--;
	z--;
	return *this;
}

