#include <iostream>
using namespace std;
    
void inputdata (int *data, int n){
	for (int i = 0; i < n; i++){
		cout << "Masukkan data penjualan ke " << i + 1 << " : ";
		cin >> *data;
	data++;
	}
}

int total (int *arr, int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += *arr;
		arr++;
	}
	return (sum);
}

int main (){
	int n;
	int datajual[n], sum, rata;
	cout << "Masukkan banyak data yang ingin dihitung : ";
	cin >> n;
	inputdata (datajual, n);
	sum = total (datajual,n);
	cout << "Total penjualan setahun = Rp. " << sum << endl;;
	rata = sum/n;
	cout << "Rata-rata penjualan = Rp. " << rata << endl;
	
}
