#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string name;
	jantung varJantung;

	manusia(string pNama)
		: name() {
		cout << name << "hidup\n";
	}
	~manusia() {
		cout << name << " mati\n";
	}
};
#endif // !MANUSIA_H
