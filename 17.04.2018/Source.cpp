#include "Vector.h"
#include "Rectangle.h"
#include <time.h>
#include <fstream>

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");
	cout << "Vvedite nomer zadaniya:";
	int nz;
	cin >> nz;
	if (nz == 1)
	{
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
	else if (nz == 2)
	{
		ifstream in;
		ofstream out;
		out.open("write.txt", ios::out); //default-->>ios::out perezapisyvaet, ios::app dobavlyaet v konec strcoki
		in.open("read.txt");
		Rectangle *p;
		p = new Rectangle[5];
		double xa, ya, xb, yb, xc, yc, xd, yd;
		double XCenter, YCenter, sideA, sideB;
		int i = 0;
		if (!in) {
			cerr << "file open error" << endl;
		}
		else {
			while (!in.eof()) {
				//in >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
				in >> XCenter >> YCenter >> sideA >> sideA;
				Rectangle R(XCenter, YCenter, sideA, sideA);
				p[i++] = R;
			}
		}
	//	for (int k = 0; k < i; k++)

	//		p[k].resize(2, 5);
			out << p[0].getXA() << "\t" << p[0].getYA() << "\t" <<
				p[0].getXB() << "\t" << p[0].getYB() << "\t" <<
				p[0].getXC() << "\t" << p[0].getYC() << "\t" <<
				p[0].getXD() << "\t" << p[0].getYD() << endl;
		
		out.close();
		system("pause");
		return 0;
	}
}