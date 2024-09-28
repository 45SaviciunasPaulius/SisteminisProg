#include "Stud.h"

Studentai::Studentai() {
		Vardas = "Vardenis";
		Pavarde = "Pavardenis";
		n = 10;
		egz = 4;
		Paz = { 10,9,8,7,6,5,4,3,2,1 };
	}

Studentai::Studentai(string Vardas, string Pavarde, vector<double> Paz, int n, int egz) {
		this->Vardas = Vardas;
		this->Pavarde = Pavarde;
		this->n = n;
		this->egz = egz;
		this->Paz = Paz;
	}

Studentai::Studentai(const Studentai& a) {
		Vardas = a.Vardas;
		Pavarde = a.Pavarde;
		n = a.n;
		egz = a.egz;
		Paz = a.Paz;
	}
	
Studentai::~Studentai() {
		Vardas.clear();
		Pavarde.clear();
		n = 0;
		egz = 0;
	}

	double Studentai::Galutinis(vector<double> _paz) {
		double sum = 0;
		double Vid, Galu;
		for (int i = 0; i < _paz.size(); i++) {
			sum += _paz[i];
		}

		Vid = sum / _paz.size();
		Galu = 0.4 * Vid + 0.6 * egz;
		return Galu;
	}

	double Studentai::Mediana(vector<double> _paz) {
		_paz.push_back(egz);
		for (int i = 0; i < _paz.size(); i++) {
			for (int j = i+1; j < _paz.size(); j++){
				if (_paz[i] > _paz[j]) {
					int a = _paz[j];
					_paz[j] = _paz[i];
					_paz[i] = a;
				}
			}
		}
		return _paz[_paz.size()/2];

	}

ostream& operator << (ostream& out, Studentai& c) {
	out << setw(15) << left << c.Vardas;
	out << setw(18) << left  << c.Pavarde;
	out << setw(18) << setprecision(3) << c.Galutinis(c.Paz);
	out << setprecision(3) << c.Mediana(c.Paz) << endl;
	return out;
}

istream& operator >> (istream& in, Studentai& c){
	cout << "Įveskite Vardą: " << endl;
	in >> c.Vardas;
	cout << "Įveskite Pavardę: " << endl;
	in >> c.Pavarde;
	cout << "Kiek Buvo namų darbų?:(0 jei nežinote) " << endl;
	in >> c.n;
	cout << "Įveskite pažymius(0 jei norite baigti): " << endl;
	int a;
	if (c.n > 0) {
		for (int i = 0; i < c.n; i++) {
			in >> a;
			c.Paz.push_back(a);
		}
	}
	else do {
			in >> a;
			c.Paz.push_back(a);
	} while(a > 0);

	cout << "Įveskite egzamino rezultata: " << endl;
	in >> c.egz;
	
	return in;
}
