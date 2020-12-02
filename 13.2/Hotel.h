#pragma once
#include <string>
#include <iostream>

using namespace std;

class Hotel
{
public:
	Hotel(string hotelNavn_ = "XX", int kategori_ = 0, int antalSenge_ = 0, int pension_ = 0);
	void print();
private:
	std::string hotelNavn_;
	int kategori_;
	int antalSenge_;
	int pension_;
};

