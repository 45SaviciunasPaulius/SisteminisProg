#include "MyLib.h"

class Studentai {
private:
	string Vardas, Pavarde;
	vector<double> Paz;
	int n, egz;
public:

	friend ostream& operator << (ostream& out, Studentai& c);
	friend istream& operator >> (istream& in, Studentai& c);

	Studentai();

	Studentai(string, string, vector<double>, int, int);

	Studentai(const Studentai&);

	~Studentai();

	double Galutinis(vector<double>);

	double Mediana(vector<double>);

};

ostream& operator << (ostream&, const Studentai&);

istream& operator >> (istream& , Studentai&);

void Skaitymas(string);
