#pragma once
#include <string>
#include <iostream>

class Rutebus
{
public:
	Rutebus();
	Rutebus(std::string farve, int rutenr, int antalPladser);
	void setFarve(std::string farve);
	void setRutenr(int rutenr);
	void setAntalPladser(int antalPladser);
	void setIDrift(bool IDrift);
	void print();

private:
	std::string farve_;
	int rutenr_;
	int antalPladser_;
	bool iDrift_;
};

