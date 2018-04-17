#include "Vector.h"
#include <time.h>

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");
	Vector mass;
	mass.at(3) = 5;
	mass.PushMass(50);
	mass.PushMass(-4);
	mass.PushMass(8);
	mass.PushMass(118);
	mass.ShowMass();
	mass.PopMass(1);
	system("pause");
	return 0;
}