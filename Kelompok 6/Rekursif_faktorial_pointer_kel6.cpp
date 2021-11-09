/*
Kelompok 6 Rekursif (Faktorial) dan Pointer 
Deference (&) merupakan suatu operator yang berfungsi untuk menanyakan alamat dari suatu variabel.
Reference (*) merupakan suatu operator yang berfungsi menyatakan suatu variabel adalah variabel pointer.
Sandy Duta A_825210126
Audrey NVS_825210101
Monica Glory 825210102
Febby Nurul F 825210150
Maycinda 825210080
Divyas Bharath_825210129
*/

#include<iostream>
using namespace std;

int faktorial (int x); //tipe data

int main (){
	
	cout << "MENGHITUNG NILAI FAKTORIAL DENGAN CARA REKURSIF DAN POINTER OLEH KELOMPOK 6" << endl;
	cout << "---------------------------------------------------------------------------" << endl << endl;
	
	int x, hasil;
	int *xptr, *hasilptr; //Mendeklarasikan variabel x, hasil sebagai pointer
	xptr = &x; //Mengkopikan alamat variabel x kedalam variabel pointer xptr
	hasilptr = &hasil;

	cout << "Masukkan angka yang ingin dihitung faktorialnya : ";
	cin >> x;
	cout << "Alamat dari angka yang sudah dimasukkan : " << &x << endl;
	cout << endl;
	
	cout << "Cara penghitungannya : " << endl;
	
	hasil = faktorial(*xptr);
	
	cout << "\n\nFaktorial " << x << "! = " << hasil << endl;
	cout << "Alamat dari hasil faktorial : " << &hasil << endl;
	
	
	cout << "\nJadi alamat dan nilai yang tertampung dari angka yang dimasukkan serta hasil dari faktorialnya : " << endl;
	cout << "Alamat yang tertampung dari angka yang sudah dimasukkan : " << xptr << endl;
	cout << "Alamat yang tertampung dari hasil faktorial : " << hasilptr << endl;
	cout << ".Nilai yang tertampung dalam variabel xptr : " << *xptr << endl; 
	cout << ".Nilai yang tertampung dalam variabel hasilptr : " << *hasilptr << endl;
	
}

int faktorial (int x){
	if (x == 1) {
		cout << x;
		return (x);
	} 
	else {
		cout << x << " * ";
		return x * (faktorial (x - 1));
	}
	
	return 0;
}

