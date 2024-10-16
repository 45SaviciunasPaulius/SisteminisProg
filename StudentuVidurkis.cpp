#include "MyLib.h"
#include "Stud.h"

int main() {
	vector<Studentai> stud;
	Studentai Jonas;
	Studentai Virgis("Virgis", "Virgutis", { 10,9,8,7,4 }, 5, 9);
	Studentai Paulius;
	cin >> Paulius;


	Skaitymas("studentai1000000.txt");

	cout << "Vardas" << setw(20) << "Pavardė" << setw(45) << "Galutinis(Vid) /  Galutinis (Med.)" << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << Jonas;
	cout << Virgis;
	cout << Paulius;

}