#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void garis();
void garis2();
void Menu(string judul, string pilihansatu, string pilihandua);

long rumus(float sks, float sppvariabel, long spptetap, long *totalsppvariabel, long *totalbayar);

int main(){
    float sppvariabel, sks;
    long spptetap, totalbayar, totalsppvariabel;
    string nim, nama, programstudi, fakultas, tipekelas, semester;
	int pilihfakultas, pilihprogramstudi, pilihkelas;
    
    cout <<"Nim\t\t: ";
    getline(cin,nim);
    
    cout <<"Nama Lengkap\t: ";
    getline(cin,nama);
    
	cout <<"Semester\t: ";
    getline(cin,semester);

    cout <<endl;
    
	Menu("Fakultas", "Teknik", "Ekonomi");
    cin >> pilihfakultas;
    
    system("cls");

    if(pilihfakultas == 1){
        fakultas = "Teknik";
        Menu("Program Studi", "Teknik Informatika (S1)", "Teknik Industri (S1)");
        cin >> pilihprogramstudi;

        if(pilihprogramstudi == 1){
            programstudi = "Teknik Informatika (S1)";
            cout <<endl;
            Menu("Tipe Kelas", "Pagi", "Malam");
            cin >> pilihkelas;

            if(pilihkelas == 1){
                tipekelas = "Pagi";
                spptetap = 5250000;
                sppvariabel = 185000;
            }
            else if(pilihkelas == 2){
                tipekelas = "Malam";
                spptetap = 6250000;
                sppvariabel = 235000;
            }
            else
            {
                cout <<"Pilihan Tidak Terdaftar!"<<endl;
                return 0;
            }
            
        }
        else if(pilihprogramstudi == 2){
            programstudi = "Teknik Industri (S1)";
            cout <<endl;
            Menu("Tipe Kelas", "Pagi", "Malam");
            cin >> pilihkelas;

            if(pilihkelas == 1){
                tipekelas = "Pagi";
                spptetap = 6650000;
                sppvariabel = 235000;
            }
            else if(pilihkelas == 2){
                tipekelas = "Malam";
                spptetap = 7650000;
                sppvariabel = 285000;
            }
            else
            {
                cout<<"Pilihan Tidak Terdaftar!"<<endl;
                return 0;
            }
        }
        else
        {
            cout<<"Pilihan Tidak Terdaftar!"<<endl;
            return 0;
        }
        
    }
    
    else if(pilihfakultas == 2){
        fakultas = "Ekonomi";
        Menu("Program Studi", "Akutansi (D3)", "Manajemen (S1)");
        cin >> pilihprogramstudi;
        
        if(pilihprogramstudi == 1){
            programstudi = "Akutansi (D3)";
            cout<<endl;
            Menu("Tipe Kelas", "Pagi", "Malam");
            cin >> pilihkelas;

            if(pilihkelas == 1){
                tipekelas = "Pagi";
                spptetap = 5750000;
                sppvariabel = 135000;
            }
            else if(pilihkelas == 2){
                tipekelas = "Malam";
                spptetap = 6750000;
                sppvariabel = 185000;
            }
            else
            {
                cout << "Pilihan Tidak Terdaftar!"<<endl;
                return 0;
            }
            
        }
        else if(pilihprogramstudi == 2){
            programstudi = "Manajemen (S1)";
            cout<<endl;
            Menu("Tipe Kelas", "Pagi", "Malam");
            cin >> pilihkelas;

            if(pilihkelas == 1){
                tipekelas = "Pagi";
                spptetap = 5850000;
                sppvariabel = 195000;
            }
            else if(pilihkelas == 2){
                tipekelas = "Malam";
                spptetap = 6850000;
                sppvariabel = 245000;
            }
            else{
                cout <<"Pilihan Tidak Terdaftar!"<<endl;
                return 0;
            }
        }
        else{
            cout <<"Pilihan tidak terdaftar!"<<endl;
            return 0;
        }
    }
    else{
        cout <<"Pilihan tidak terdaftar!"<<endl;
        return 0;
    }
    cout <<endl;
    cout <<"Input Jumlah SKS : ";
    cin >> sks;
    
    system("cls");
    
	rumus(sks, sppvariabel, spptetap, &totalsppvariabel, &totalbayar);

    garis2();
    cout << "Administrasi Universitas XYZ"<<endl;
    garis2();
    cout << "Nim\t\t\t: " << nim <<endl;
    cout << "Nama Lengkap\t\t: " << nama <<endl;
    cout << "Semester\t\t: " << semester <<endl;
    cout << "Fakultas\t\t: " << fakultas <<endl;
    cout << "4Program Studi\t\t: " << programstudi <<endl;
    cout << "Tipe Kelas\t\t: " << tipekelas <<endl;
    cout << "Jumlah SKS\t\t: " << sks <<endl;
    garis2();
    cout << "SPP Tetap\t\t: Rp." << spptetap <<endl;
    cout << "SPP Variabel\t\t: Rp." << sppvariabel <<endl;
    cout << "Total SPP Variabel\t: Rp." << totalsppvariabel <<endl;
    garis2();
    cout << "Total Bayar\t\t: Rp." << totalbayar <<endl;
    garis2();
	
	getch();
}

void garis(){
    cout<<"================================"<<endl;
}

void garis2(){
    cout<<"====================================================================="<<endl;
}
void Menu(string judul, string pilihansatu, string pilihandua){
    cout<<judul<<endl;
    garis();
    cout<<"1 "<<pilihansatu<<endl;
    cout<<"2 "<<pilihandua<<endl;
    garis();
    cout<<"Pilih "<<judul<<" (1/2) : ";
}

long rumus(float sks, float sppvariabel, long spptetap, long *totalsppvariabel, long *totalbayar){
    *totalsppvariabel = sppvariabel * sks;
    *totalbayar = spptetap + *totalsppvariabel;
    return 0;
}

