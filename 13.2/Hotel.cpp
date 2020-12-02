#include "Hotel.h"


Hotel::Hotel(string hotelNavn, int kategori, int antalSenge, int pension)
{
	hotelNavn_ = hotelNavn;
	kategori_ = (kategori >= 1 && kategori <= 5 ? kategori : 0);
	antalSenge_ = (antalSenge >= 0 ? antalSenge : 0);
	pension_ = (pension >= 0 && pension <= 3 ? pension : 0);
}
void Hotel::print()
{
	cout << "Hotel " << hotelNavn_ << endl;
	for (size_t i = 0; i < kategori_; i++)
		cout << "*";
	cout << endl; 
	cout << "Antal senge: " << antalSenge_ << endl;
	cout << "Pension: ";
	switch (pension_)
	{
	case 0:
		cout << "1/4 ";
		break;
	case 1:
		cout << "1/2 ";
		break;
	case 2:
		cout << "3/4 ";
		break;
	case 3: 
		cout << "1/1 ";
		break;
	}
	cout << "pension.";
}
