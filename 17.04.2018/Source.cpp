#include "Vector.h"
#include "Point.h"
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
		int i = 0;
		if (!in) {
			cerr << "file open error" << endl;
		}
		else {
			while (!in.eof()) {
				in >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
				Rectangle R(xa, ya, xb, yb, xc, yc, xd, yd);
				p[i++] = R;
			}
		}
		for (int k = 0; k < i; k++)
		{
			out << p[k].getXA() << "\t" << p[k].getYA() << "\t" <<
				p[k].getXB() << "\t" << p[k].getYB() << "\t" <<
				p[k].getXC() << "\t" << p[k].getYC() << "\t" <<
				p[k].getXD() << "\t" << p[k].getYD() << endl;
		}
		out.close();
		system("pause");
		return 0;
	}
}