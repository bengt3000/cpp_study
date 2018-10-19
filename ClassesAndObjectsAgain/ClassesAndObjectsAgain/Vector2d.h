#pragma once

class Vector2d
{
private:
	int _size;
	double _value[];
public:
	Vector2d();
	Vector2d(int size, double & value);
	~Vector2d();

};

Vector2d::Vector2d() {};
//Vector2d::Vector2d(int size, double & value) : _size(size), _value(value) {};
Vector2d::~Vector2d() {};
