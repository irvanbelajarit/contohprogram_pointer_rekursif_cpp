#include <iostream>
#include <math.h>

using namespace std;

double soal1 (int pj,int lb, int tg){
	int p = 8, t = 5, l = 12;
	return (2*(p*l)+2*(p*t)+2*(l*t));
}

double faktorial (int a){
	if(a == 1)
		return a;
		else if (a == 0){
		return 0;}
		else {
		return a*faktorial(a-1);
		}
	}
	
double soal3 (){
	return (15/0.75);
}

double soal4 (int C){
	return (C*9/5+32);
}

double soal5(int G,int V){
	int g = 10, v = 8;
	return (pow(v,2)/(2*g));
}

int main (){
	int point = 0;
	int *pointPtr = &point;
	int a = 6,angka,pj,tg,lb,w,j,C=30,G,V;
	double hasil;
	char jawab;
	
	cout << "===================================================="<<endl;
	cout << "		   PROGRAM QUIZ"<<endl; 
	cout << "===================================================="<<endl;
	do{
	cout << endl;
	cout << "Pilihlah nomor yang ingin anda kerjakan 1/2/3/4/5 : ";
	cin >> angka;
	cout <<endl;
	switch(angka){
		case 1:
			cout << "Jawablah hasil dari soal berikut!"<<endl;
			cout << "hitunglah luas permukaan dari sebuah balok yang memiliki :"<<endl;
			cout << "panjang = 8; tinggi = 5; lebar = 12"<<endl;
			cout << "Hasil = ";
			cin >> hasil;
			cout <<endl <<endl;
			if (hasil == 392){
				cout << "~ JAWABAN ANDA BENAR ~"<<endl;
				*pointPtr += 20;
				cout << "Point anda : "<< point<<endl;}
				else {
					cout << "~ JAWABAN ANDA SALAH ~" <<endl;
					cout << "Jawaban yang benar = " << soal1(pj,lb,tg) <<endl;
					*pointPtr -= 10;
					cout << "Point anda : "<< point<<endl;
				}
			cout << "Apa anda ingin mengerjakan soal lagi? [Y/T] : ";
			cin >> jawab;
			break;
		case 2 :
			cout << "Jawablah hasil dari soal berikut!"<<endl;
			cout << "hitunglah hasil dari 6!"<<endl;
			cout << "Hasil = ";
			cin >> hasil;
			cout <<endl;
			if (hasil == 720){
				cout << "~ JAWABAN ANDA BENAR ~"<<endl;
				*pointPtr += 20;
				cout << "Point anda : "<< point<<endl;}
				else {
					cout << "~ JAWABAN ANDA SALAH ~" <<endl;
					cout << "Jawaban yang benar = " << faktorial(a)<< endl;
					*pointPtr -= 10;
					cout << "Point anda : "<< point<<endl;
				}
			cout << "Apa anda ingin mengerjakan soal lagi? [Y/T] : ";
			cin >> jawab;
			break;
		case 3 :
			cout << "Jawablah hasil dari soal berikut!"<<endl;
			cout << "Jika sebuah mobil ingin pergi sejauh 15 km dalam waktu 45 menit" <<endl;
			cout << "Hitunglah kecepatan yang diperlukan oleh pengendara mobil tersebut!" <<endl;
			cout << "Hasil = ";
			cin >> hasil;
			cout <<endl <<endl;
			if (hasil == 20 ){
				cout << "~ JAWABAN ANDA BENAR ~"<<endl;
				*pointPtr += 20;
				cout << "Point anda : "<< point<<endl;}
				else {
					cout << "~ JAWABAN ANDA SALAH ~" <<endl;
					cout << "Jawaban yang benar = " << soal3() <<endl;
					*pointPtr -= 10;
					cout << "Point anda : "<< point <<endl;
					}
			cout << "Apa anda ingin mengerjakan soal lagi? [Y/T] : ";
			cin >> jawab;
			break;		
		case 4 :
			cout << "Jawablah hasil dari soal berikut!"<<endl;
			cout << "Konversikanlah 30 celscius menjadi fahrenheit"<<endl;
			cout << "Hasil = ";
			cin >> hasil;
			cout <<endl <<endl;
			if (hasil == 86 ){
				cout << "~ JAWABAN ANDA BENAR ~"<<endl;
				*pointPtr += 20;
				cout << "Point anda : "<< point<<endl;}
				else {
					cout << "~ JAWABAN ANDA SALAH ~" <<endl;
					cout << "Jawaban yang benar = " << soal4(C) <<endl;
					*pointPtr -= 10;
					cout << "Point anda : "<< point <<endl;
					}
			cout << "Apa anda ingin mengerjakan soal lagi? [Y/T] : ";
			cin >> jawab;
			break;		
		case 5 : 
			cout << "Jawablah hasil dari soal berikut!"<<endl;
			cout << "Sebuah benda ditembakkan vertikal keatas dengan kecepatan awal 8 m/s"	<<endl;
			cout << "dan percepatan gravitasinya = 10m/s^2. Tentukan ketinggian maks yang dicapai benda tersebut" <<endl;
			cout << "Hasil = ";
			cin >> hasil;
			cout <<endl <<endl;
			if (hasil == 3.2 ){
				cout << "~ JAWABAN ANDA BENAR ~"<<endl;
				*pointPtr += 20;
				cout << "Point anda : "<< point<<endl;}
				else {
					cout << "~ JAWABAN ANDA SALAH ~" <<endl;
					cout << "Jawaban yang benar = " << soal5(G,V) <<endl;
					*pointPtr -= 10;
					cout << "Point anda : "<< point <<endl;
					}
			cout << "Apa anda ingin mengerjakan soal lagi? [Y/T] : ";
			cin >> jawab;
			break;
		default :
			cout << "Anda memasikan nomor yang salah"<<endl;
			cout << "Apa anda ingin mengerjakan soal lagi? [Y/T] : ";
			cin >> jawab;
		}
	}
	while (jawab == 'Y'|| jawab =='y');
	if (jawab == 'T'|| jawab =='t'){
		cout <<endl << endl;
		cout << " ~~~~~~~ Total point anda : " << point << " ~~~~~~~" << endl;
		}
		else {
			cout << "Anda memasukan pilihan yang salah";
		}
	return 0;
}
