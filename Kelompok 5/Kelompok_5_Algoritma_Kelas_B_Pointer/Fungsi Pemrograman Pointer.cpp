#include<iostream>
#include<iomanip>

using namespace std;

int salah_input(int total){
	int *akhir = &total;
	int salah, benar;
	int *z = &benar;
	cout << "Masukkan nilai yang salah = ";
	cin >> salah;
	cout << "Masukkan nilai yang benar = ";
	cin >> benar;
	*akhir = (*akhir-salah)+*z;
	return total;
}

int wrong(int total){
	char jawab;
	cout << "Apakah Terjadi Kesalahan Input (Y/T)? = ";
	cin >> jawab;
	if (jawab == 'Y'|| jawab =='y'){
	do{
		total = salah_input(total);
		cout << "Apakah Terjadi Kesalahan Input (Y/T)? = ";
		cin >> jawab;
	}while (jawab=='Y'||jawab=='y');
	}
	return total;
}

int lulus(int y){
	int *ylulus = &y;
	int naik, turun;
	char jawab1, jawab2;
	cout << "Apakah Nilai yang Diubah Mempengaruhi Kelulusan (Y/T)? = ";
	cin >> jawab1;
	if(jawab1 == 'Y' || jawab1 == 'y'){
		do{
		cout << "Apakah Nilai Kelulusan Menjadi Lebih Tinggi (Y/T)? = ";
		cin >> jawab2;
			if(jawab2 == 'Y' || jawab2 =='y'){
				cout << "Masukkan Kenaikan Kelulusan = ";
				cin >> naik;
				*ylulus += naik;	
			}
			else {
				cout << "Masukkan Penurunan Kelulusan = ";
				cin >> turun;
				*ylulus -= turun;
			}
		cout << "Apakah Nilai yang Diubah Mempengaruhi Kelulusan (Y/T)? = ";
		cin >> jawab1;	
		}while (jawab1 == 'Y' || jawab1 == 'y');
	}
	return y;	
}

void tabel(float x, float total, int y, int remedial){
	float rata;
	rata = total / x;
	cout << "||" << " Jumlah Murid yang Dihitung " <<"||" << " Nilai Remedial "  << "||" << " Rata-Rata Nilai Kelas " << "||" << " Jumlah Murid Lulus " << "||" << endl;
	cout << "||" << setw(28) << x << "||" << setw(16) << remedial << "||" << setw(23) << rata <<"||"<< setw(20) << y <<"||"<< endl;
}

int main(){
	int x, remedial;
	int total = 0;
	int y;
	int *ylulus = &y;
	char jawab;
	
	cout << "===================================================="<<endl;
	cout << "	  PROGRAM PENGHITUNG NILAI KELAS"<<endl; 
	cout << "===================================================="<<endl;
	
	cout << "Masukkan Jumlah Murid yang Ingin di Hitung = ";
	cin >> x;
	cout << "Masukkan Nilai Remedial = ";
	cin >> remedial;
	cout << endl;
	
	int nilai;
	string nama;

	for(int i = 0; i < x; i++){
		cout << "Masukkan Nama Murid " << i+1 << " = ";
		cin >> nama;
		cout << "Masukkan Nilai Murid " << i+1 << " = ";
		cin >> nilai;
		total = total + nilai;
		if (nilai >= remedial){
			*ylulus += 1;}
		cout << endl;
	};
	
	total = wrong(total);
	cout << endl;
	y = lulus(y);
	cout << endl;
	tabel(x,total,y, remedial);
}
