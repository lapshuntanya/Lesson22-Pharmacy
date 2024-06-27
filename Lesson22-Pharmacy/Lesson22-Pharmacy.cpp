#include "Medicine.h"

int main()
{
	Medicine a;
	Medicine b("Aspirin", TYPES::pills, "India", 20.99);
	Medicine c("Nurofen", TYPES::capsules, "Italy", 34.56);
	const Medicine d("Dr. MOM", TYPES::syrope, "France", 150.70);

	/*a.showInfo();
	b.showInfo();
	c.showInfo();
	d.showInfo();

	cout << "===========================================\n\n";
	//Copy constructor
	Medicine k = b;//"Aspirin", TYPES::pills, "India", 20.99
	k.setTitle("Aspirin Forte");

	b.showInfo();
	k.showInfo();

	cout << "===========================================\n\n";
	//Operator =
	a = d;
	a.setCountry("India");
	a.setPrice(200.45);

	a.showInfo();
	d.showInfo();*/


}

