#include "MyLib.h"
#include "Stud.h"

int main() {
	vector<Studentai> stud;
	Studentai Jonas;
	Studentai Virgis("Virgis", "Virgutis", { 10,9,8,7,4 }, 5, 9);
	Studentai Paulius;
	cin >> Paulius;


	////Skaitymas iš failo.

	vector<string> _lines;
	string lines;
	vector<double> paz;

	ifstream fd("StudentuSarasas.txt");

	while (getline(fd, lines)) {
		_lines.push_back(lines);
	}

	string word;
	vector<string> words;
	for (int i = 1; i < _lines.size();i++) {
		stringstream _stekstas(_lines[i]);

		while (_stekstas >> word) { 
			words.push_back(word);
		}
		int _egz = stoi(words[words.size() - 1]);

		for (int j = 2; j < words.size() - 2;j++) {
			paz.push_back(stoi(words[j]));
		}

		stud.push_back(Studentai(words[0], words[1], paz, paz.size(), _egz));
		words.clear();
	}
	/////////////////////////


	cout << "Vardas" << setw(20) << "Pavardė" << setw(45) << "Galutinis(Vid) /  Galutinis (Med.)" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << Jonas;
	cout << Virgis;
	cout << Paulius;
	
	for (int i = 0; i < stud.size();i++) {
		cout << stud[i];
	}
}