#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int a,i, x=4;
	srand(time(NULL));
	a=rand()%50+rand()%1;
	cout <<" =============================================="<<endl;
	cout <<"     	      ||Game Tebak Angka|| "<<endl;
	cout <<" =============================================="<<endl;
	cout <<" RULES" <<endl;
	cout <<" 1.Anda diberi kesempatan sebanyak 5x menebak"<<endl;
	cout <<" 2.Masukkan angka dari 1 - 50"<<endl;
	cout <<" ==============================================="<<endl;	
	cout <<" Masukkan angka: ";
	cin >> i;
	while(i != a & x > 0){
		cout<<"\n\n Tebakan salah\n";
		cout<<" Kesempatan menebak tersisa "<< x << endl;
		x--;
		cout<< " Tebak lagi 1 - 50: ";
		cin>> i;
		if(i < a){
			cout <<" Tebakan anda terlalu kecil";
		}else if(i > a){
			cout <<" Tebakan anda terlalu besar";
		}
	}
	if((i == a)&(x >= 0)){
		cout << " Selamat Jawaban anda benar";
	}else{
		cout << "\n Anda salah menebak" << endl;
		cout << "\n Angka tersebut adalah : " << a << endl;
	}
getch();
}





