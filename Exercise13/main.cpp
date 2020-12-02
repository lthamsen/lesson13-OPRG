#include "Rutebus.h"

int main()
{
	Rutebus minPik("gul", 100, 60);
	minPik.print();
	minPik.setIDrift(false);
	minPik.print();

	
	Rutebus d("eeee",0,0);
	d.print();
}