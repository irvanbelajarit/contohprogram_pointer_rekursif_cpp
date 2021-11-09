#include <bits/stdc++.h>

using namespace std;

void permutasi(){
 int n, p, x1=1, x2=1, hasil;
 cout<<"Masukan Nilai N = ";
 cin>>n;
 cout<<"Masukan Nilai P = ";
 cin>>p;
 for(int i = 1; i <= n; i++){
  x1 = x1*i;
 }for(int i = 1; i <= n-p ; i++){
  x2 = x2*i;
 }
 
 hasil = x1/x2;
 cout<<"Nilai Permutasi dari "<<n<<endl;
 cout<<"Diambil "<<p<<endl;
 cout<<"Adalah "<<hasil<<endl;
}

void kombinasi(){
 int n, p, x1=1, x2=1, x3=1, hasil;
 cout<<"Masukan Nilai N = ";
 cin>>n;
 cout<<"Masukan Nilai P = ";
 cin>>p;
 for(int i = 1; i <= n ; i++){
  x1 = x1*i;
 }for(int i = 1; i <= p ; i++){
  x2 = x2*i;
 }for(int i = 1; i <= n - p; i++){
  x3 = x3*i;
 }
 
 hasil = x1/(x2*x3);
 cout<<"Hasil Kombinasi dari "<<n<<endl;
 cout<<"Diambil "<<p<<endl;
 cout<<"Adalah "<<hasil<<endl;
}

int main(){
 int angka;
 cout<<"Program untuk menghitung Permutasi & Kombinasi"<<endl;
 cout<<"1. Permutasi"<<endl;
 cout<<"2. Kombinasi"<<endl;
 cout<<"Masukan Salah Satu Angka (1/2) : ";
 cin>>angka;
  if(angka == 1){
   permutasi();
  }else if(angka == 2){
   kombinasi();
  }else{
   cout<<"Pilihan yang Invalid";
  }
}

