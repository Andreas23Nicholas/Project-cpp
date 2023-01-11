#include <iostream>
#include <conio.h>
using namespace std;

float perkalian(float a,float b,float *hasil);
float pembagian(float a,float b,float *hasil);
float penjumlahan(float a,float b,float *hasil);
float pengurangan(float a,float b,float *hasil);
void garis();

int main(){
	int c;
	float a,b;
	float hasil;
	garis();
	cout << "Selamat datang di program kalkulator"<<endl;
	garis();
	cout << "Ketentuan\n1.Angka pertama merupakan awalan\n2.Angka kedua merupakan akhiran\n";
	garis();
	cout << "Masukan angka 1: ";
	cin >> a;
	cout << "Masukan angka 2: ";
	cin >> b;
	garis();
	cout << "Pilih operasi hitung yang diinginkan"<<endl;
	cout << "1.Perkalian\n2.Pembagian\n3.Penjumlahan\n4.Pengurangan"<<endl;
	cout << "Plihan anda:";
	cin >> c;
	garis();
	
	switch (c){
		case 1:{
			perkalian(a,b,&hasil);
			cout << "Hasilnya adalah:"<<hasil<<endl;
			garis();
			break;
		}
		case 2:{
			pembagian(a,b,&hasil);
			cout << "Hasilnya adalah:"<<hasil<<endl;
			garis();
			break;
		}
		case 3:{
			penjumlahan(a,b,&hasil);
			cout << "Hasilnya adalah:"<<hasil<<endl;
			garis();
			break;
		}
		case 4:{
			pengurangan(a,b,&hasil);
			cout << "Hasilnya adalah:"<<hasil<<endl;
			garis();
			break;
		}
		default :{
			cout << "Menu yang anda pilih tidak tersedia";
			break;
		}
		
	} 
getch();	
}
float perkalian(float a,float b,float *hasil){
	*hasil=a*b;
	return 0;
}

float pembagian(float a,float b,float *hasil){
	*hasil=a/b;
	return 0;
}

float penjumlahan(float a,float b,float *hasil){
	*hasil=a+b;
	return 0;
}

float pengurangan(float a,float b,float *hasil){
	*hasil=a-b;
	return 0;
}

void garis(){
	cout << "------------------------------------"<<endl;
}













