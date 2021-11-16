#include<iostream>
using namespace std;
int memori[999]; //tempat disimpannya bilangan prima
int jumlah;
int perkalian = 1;
int j;
int k;
int input;
int angka;

int ambil(int angka,int i){ // mod angka sama angka tersebut sampai 1
	if (i == 1){
		return 1;
	}
	else if(angka % i == 0){
		return 1 + ambil(angka, --i);
	}
	else {
		return 0 + ambil(angka, --i);
	}
}

int cek(int angka){ //mengambil angka yang hanya dapat dibagi oleh 1 bilangan
	if (angka > 1){
		return (ambil(angka,angka) == 2);
	}
	else {
		return false;
	}
}

int hasil(int angka){ //ini adalah fungsi rekursif mencari bilangan prima
	
	if (angka <= 1){
	return 0;
	}
	else if (cek(angka)){
		cout << angka << " merupakan bilangan prima" << endl;
		j = j + 1;
		memori[j] = angka;
		return hasil(angka - 1);
	}
	else{
		return hasil(angka - 1);
	}
	return 0;
}

int sum(){ //untuk menjumlahkan semua bilangan prima
	for(k = 0; k <= j; k++){
	jumlah += memori[k];
}
}

int multiple(){ //untuk mengalikan semua bilangan prima
	for(k = 1; k <= j; k++){
	perkalian = perkalian*memori[k];	
	}
	}


int main(){
	int *data_jumlah; 	//tanda '*' adalah penanda pointer
	int *data_kali;		// tanda '&' adalah alamatnya
	data_jumlah = &jumlah;
	data_kali = &perkalian;
	cout << "masukkan bilangan: ";
	cin  >> input;
	angka = input;
	hasil(angka);
	sum();
	multiple();
	cout << endl;
	cout << "Hasil penjumlahan bilangan prima = "<< *data_jumlah << endl;
	if (angka >= 29){
		cout << "maaf tidak dapat menampilkan hasil perkalian";
		return 0;
	}
	else{
	cout << "Hasil perkalian bilangan prima = " << *data_kali<< endl;
}
}