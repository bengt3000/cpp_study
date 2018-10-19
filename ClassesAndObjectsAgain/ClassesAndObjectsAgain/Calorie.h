#pragma once
#include <string>


struct Calorie
{
	int const cucumber = 16;
	int const shrimps = 77;
	int const pasta = 360;
	int const mincedmeat = 192;
	int const tomatosauce = 52;
	int const coke = 43;
	int const fries = 307;
	int const carrot = 36;
};

struct Ingredients
{
	std::string cucumber = "cucumber";
	std::string const shrimps = "shrimps";
	std::string const pasta = "pasta";
	std::string const mincedmeat = "mincedmeat";
	std::string const tomatosauce = "tomatosauce";
	std::string const coke = "coke";
	std::string const fries = "fries";
	std::string const carrot = "carrot";
};

class Meal
{
	int _total_calorie_count;
	int _nIngridients;

public:
	Meal();
	~Meal();

private:

};

Meal::Meal()
{
}

Meal::~Meal()
{
}