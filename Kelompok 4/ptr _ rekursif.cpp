#include<iostream>
using namespace std;

int data[100];

int masukkan_data(int n , int a){
	if(a >= n){
		return 0;
	}else{
		cout << "Masukkan Data ke " << a+1 << " yang mau dikonversi = ";
		cin >> data[a];
		return masukkan_data(n , a+1);
	}
}

float konversi_kaki (float a){
	float h, k;
	float *xptr;
	k = 30.48;
	xptr = &k;
	h = a * *xptr;
	return h;
}

float konversi_senti (float a){
	float h, k;
	float *xptr;
	k = 30.48;
	xptr = &k;
	h = a / *xptr;
	return h;
}

int main (){
	int pilih , n;
	float hasil, angka;
	float *hptr;
	hptr = &hasil;
		
	// menu pilihan konversi
	cout << " 1 = konversi kaki ke cm "<<endl;  
	cout << " 2 = konversi cm ke kaki "<<endl;
	cout << " pilih konversi ( 1 atau 2 ) "; 
	cin >> pilih; 
	// mengkonversi kaki ke cm jika memilih menu 1
	if ( pilih == 1 ){
		cout << "Masukkan Berapa Banyak Data Yang ingin Dikonversi = ";
		cin >> n;
		masukkan_data(n , 0);
		for(int i = 0; i < n; i++){
			hasil = konversi_kaki(data[i]);
			cout << "hasil konversi ke " << i+1 << " = " <<*hptr<<" cm" << endl;
		}
	}
	// mengkonversi cm ke kaki jika memilih menu 2
	else if ( pilih == 2 ){
		cout << "Masukkan Berapa Banyak Data Yang ingin Dikonversi = ";
		cin >> n;
		masukkan_data(n , 0);
		for(int i = 0; i < n; i++){
			hasil = konversi_senti(data[i]);
			cout << "hasil konversi ke " << i+1 << " = " <<*hptr<<" ft" << endl;
		}
	}
	// jika yang dipilih bukan 1 atau 2
	else {
		cout << " pilihan tidak diketahui , coba kembali";
	}
}
