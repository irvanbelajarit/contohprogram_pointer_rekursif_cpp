#include<iostream>
using namespace std;

void biner(int bil){
	int sisa;
	if (bil <= 1){ 
		cout << bil;	
		return;
	}
	else {
		biner(bil/2);
		sisa = bil%2; 
		cout << sisa;
	}
} 

int main(){	
	int bil;
	int *bilPtr = &bil;
	
	cout << "###  Program C++ Konversi Desimal ke Biner dan Pointer ###" << endl;
    cout << "=============================================" << endl;
    cout << endl;
    
	cout<<"Konversi Desimal ke Biner"<<endl;
	
		cout << "Masukan Bilangan Desimal : "; 
		cin >> bil;
		cout << "Biner : ";
		biner(bil);
		cout<<endl;
		cout << "address bilangan : " << &bil << endl;

}
