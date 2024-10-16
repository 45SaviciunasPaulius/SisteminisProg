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
		double a;
		if ((_paz.size() / 2) % 2 != 0)a = _paz[_paz.size() / 2];
		else {
			a = ((_paz[_paz.size() / 2]) + ((_paz[_paz.size() / 2]) - 1)) / 2;
		}


		return a;

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

	int a;

	 if (c.n == 0) {
		cout << "Įveskite pažymius!(0 jei norite baigti)" << endl;
		do {
			in >> a;
			c.Paz.push_back(a);
		} while (a > 0);
	}

	else if (c.n > 0) {
		cout << "Įveskite pažymius!(0 jei norite, kad būtu sugeneruojami atsitiktinai)" << endl;
		for (int i = 0; i < c.n; i++) {
			in >> a;
			if (a == 0) {
				cout << "Pažymiai sugeneruoti!" << endl;
				for (int i = 0; i < c.n; i++) {
					c.Paz.push_back(rand() % 11);
				}
				break;
			}
			else c.Paz.push_back(a);
		}
	}

	cout << "Įveskite egzamino rezultata: " << endl;
	in >> c.egz;
	
	return in;
}

void Skaitymas(string file) {
	bool FLine = true;
	ifstream fd(file);
	ofstream Moks("Moksliukai.txt");
	ofstream Nemoks("Nemoksos.txt");


	vector<double> paz;
	paz.reserve(100);
	string line, word;
	stringstream ss;

	while (getline(fd, line)) {
		ss.clear();
		ss.str(line);

		if (FLine == true) {
			Moks << "Vardas" << setw(20) << "Pavardė" << setw(45) << "Galutinis(Vid) /  Galutinis (Med.)" << endl;
			Nemoks << "Vardas" << setw(20) << "Pavardė" << setw(45) << "Galutinis(Vid) /  Galutinis (Med.)" << endl;
		}

		if (FLine == false) {
			vector<string> words;
			while (ss >> word) {
				words.push_back(word);
			}
			paz.clear();
			int egzaminas = stoi(words.back());

			for (int i = 2; i < words.size() - 2; i++) {
				paz.push_back(stoi(words[i]));
			}

			Studentai a(words[0], words[1], paz, paz.size(), egzaminas);
			double galutinis = a.Galutinis(paz);
			double mediana = a.Mediana(paz);

			if (galutinis >= 5) {
				Moks << setw(15) << left << words[0];
				Moks << setw(18) << left << words[1];
				Moks << setw(18) << setprecision(3) << galutinis;
				Moks << setprecision(3) << mediana << '\n';
			}
			else {
				Nemoks << setw(15) << left << words[0];
				Nemoks << setw(18) << left << words[1];
				Nemoks << setw(18) << setprecision(3) << galutinis;
				Nemoks << setprecision(3) << mediana << '\n';
			}
		}
		else FLine = false;
	}
}