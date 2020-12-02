#include "Rutebus.h"

Rutebus::Rutebus()
{
}

Rutebus::Rutebus(std::string farve, int rutenr, int antalPladser)
{
	setFarve(farve);
	setRutenr(rutenr);
	setAntalPladser(antalPladser);
}

void Rutebus::setFarve(std::string farve)
{
	farve_ = (farve == "hvid" || farve == "gul" || farve == "sort" ? farve : "ukendt");
}

void Rutebus::setRutenr(int rutenr)
{
	rutenr_ = (rutenr >= 100 && rutenr <= 999 ? rutenr : 0);
}

void Rutebus::setAntalPladser(int antalPladser)
{
	antalPladser_ = (antalPladser >= 10 && antalPladser <= 60 ? antalPladser : 0);
}

void Rutebus::setIDrift(bool IDrift)
{
	if (IDrift == 1)
		iDrift_ = false;
	else
		iDrift_ = true;
}

void Rutebus::print()
{
	std::cout << "Bus nr. " << rutenr_ << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "Farve: " << farve_ << std::endl;
	std::cout << "Antal pladser: " << antalPladser_ << std::endl;
	std::cout << "Bussen er ";
	if (iDrift_ == true)
		std::cout << "ikke ";
	std::cout << "i drift." << std::endl;
	std::cout << "-----------------------" << std::endl;
}
