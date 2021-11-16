#include<iostream>

using namespace std;

void checkPalindrome (const char *p) { 
// const char* berarti pointer hanya mengambil dari lokasi yang tidak bisa diubah
	
	const char *pnew = p;
// *pnew untuk membuat variabel baru yang akan dibandingkan dengan variabel pada *p
	
	while (*++p);
// mengecek per huruf dari awal dan akhir apakah palindrome / tidak menggunakan rekursif	
	while (*pnew++ == *--p);
	
// menampilkan hasil setelah dibandingkan jika termasuk palindrome / tidak
	if (pnew > p) {
		cout << "Result : string is Palindrome";
	}
	else {
		cout << "Result : string is NOT Palindrome";
	}
	}
	
int main () {
	
	int x;
// memasukan jumlah huruf yang akan di cek
	cout << "Please enter the size of the string : \n";
	cin >> x;
	cout << "\n";
	
// isi dari pointer str dimasukkan ke dalam array char sebagai x
// str = p
	char *str = new char[x];
	
	cout << "Please enter the string : \n";
	cin >> str;
	cout << "\n";
	
// memanggil fungsi untuk mengecek kata tersebut palindrome / tidak
	checkPalindrome(str);
	
// delete agar bisa mengulangi fungsi dengan kata baru	
	delete [] str;
}

