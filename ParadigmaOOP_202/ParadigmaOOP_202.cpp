#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {		//memberi im
		//Defenisi
	}

	~mahasiswa() {
		cout << "Id   " << id << endl;
		cout
	}
};

