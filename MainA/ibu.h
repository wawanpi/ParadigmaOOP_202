#pragma once
#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vecktor<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	}
	void tambahAnak(anak*);
	void cetakAnak();

};
#endif // IBU_H
