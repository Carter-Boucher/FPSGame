#include "vector3d.h"

vector3d::vector3d()
{
	x = y = z = 0;
}

vector3d::vector3d(float a, float b)
{
	this->x = a;
	this->y = b;
	this->z = 0;
}

vector3d::vector3d(float a, float b, float c)
{
	this->x = a;
	this->y = b;
	this->z = c;
}

float vector3d::dotProduct(const vector3d& vec2)
{
	return(x * vec2.x + y * vec2.y + z * vec2.z);
}

vector3d vector3d::crossProduct(const vector3d& vec2)
{
	return vector3d();
}

float vector3d::length()
{
	return sqrt(x * x + y * y + z * z);
}

void vector3d::normalize()
{
	float len = length();
	if (len != 0) {
		x /= len;
		y /= len;
		z /= len;
	}
}

void vector3d::change(float a, float b, float c)
{
	this->x = a;
	this->y = b;
	this->z = c;
}

void vector3d::change(vector3d& vec2)
{
	this->x = vec2.x;
	this->y = vec2.y;
	this->z = vec2.z;
}

void vector3d::change(vector3d vec2)
{
	this->x = vec2.x;
	this->y = vec2.y;
	this->z = vec2.z;
}

void vector3d::changeX(float a)
{
	this->x = a;
}

void vector3d::changey(float b)
{
	this->y = b;
}

void vector3d::changeZ(float c)
{
	this->z = c;
}

vector3d vector3d::operator+(const vector3d& vec2)
{
	return vector3d(x + vec2.x, y + vec2.y, z + vec2.z);
}

vector3d vector3d::operator-(const vector3d& vec2)
{
	return vector3d(x - vec2.x, y - vec2.y, z - vec2.z);
}

vector3d vector3d::operator*(float num)
{
	return vector3d(x * num, y * num, z * num);
}

vector3d vector3d::operator/(float num)
{
	if (num != 0) {
		return vector3d(x / num, y / num, z / num);
	}
	else {
		return vector3d();
	}
}

vector3d& vector3d::operator+=(const vector3d& vec2)
{
	x += vec2.x;
	y += vec2.y;
	z += vec2.z;
	return *this;
}

vector3d& vector3d::operator-=(const vector3d& vec2)
{
	x -= vec2.x;
	y -= vec2.y;
	z -= vec2.z;
	return *this;
}

vector3d& vector3d::operator*=(float num)
{
	x *=num;
	y *= num;
	z *= num;
	return *this;
}

vector3d& vector3d::operator/=(float num)
{
	if (num != 0) {
		x /= num;
		y /= num;
		z /= num;
	}
	return *this;
}

bool vector3d::operator==(const vector3d vec2)
{
	return (x == vec2.x && y == vec2.y && z == vec2.z);
}

bool vector3d::operator!=(const vector3d vec2)
{
	return !(*this == vec2);
}

std::ostream& operator<<(std::ostream& out, const vector3d& vec2)
{
	out << vec2.x << " " << vec2.y << " " << vec2.z << std::endl;
	return out;
}
