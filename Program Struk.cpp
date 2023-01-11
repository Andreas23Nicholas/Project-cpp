#include <iostream>
#include <conio.h>
#include <fstream>

//Program berjalan menggunakan 32-bit

using namespace std;

int total(int jml[],int hs[],int x){	//fungsi untuk total
    int tot[x]; 
    tot[x]=hs[x]*jml[x];
    return tot[x];
}

int subtot(int jml[],int hs[],int x){	//fungsi untuk subtotal 
    int tot[x],sub=0;
	 
	for(int i=0;i<x;i++){
    tot[i]=hs[i]*jml[i];
	sub+=tot[i];
	}
	
	return sub;
}

int disk(int jml[],int hs[],int x){		//fungsi untuk diskon
	int tot[x],sub=0;
	int dis;
	 
	for(int i=0;i<x;i++){
    tot[i]=hs[i]*jml[i];
	sub+=tot[i];
	}
	if(sub>5000000){
		dis=sub*0.3;
	}
	else if(sub<5000000&&sub>2000000){
		dis=sub*0.15;
	}
	else{
		dis=0;
	}
	return dis;
}

int ppn(int jml[],int hs[],int x){		//fungsi untuk ppn
	int ppn,dis,tot[x],sub=0;
	 
	for(int i=0;i<x;i++){
    tot[i]=hs[i]*jml[i];
	sub+=tot[i];
	}
	if(sub>5000000){
		dis=sub*0.3;
	}
	else if(sub<5000000&&sub>2000000){
		dis=sub*0.15;
	}
	else{
		dis=0;
	} 
	ppn=(sub-dis)*0.1;
	return ppn;
}

int main(){
	
	int i,j,jumlah[30],harga[30],x,sub,grandtotal,bayar;
	string nota,namabarang[30];
	
	cout << "======================================\n";
	cout << " TABEL DATA BARANG TOKO SUMBER MAKMUR\n";
	cout << "======================================\n";
	cout << "DAFTAR HARGA BARANG (/pcs)           \n";
	cout << "1.MEJA\t\t "   <<"Rp 1.500.000       \n";
	cout << "2.KURSI\t\t "  <<"Rp   300.000       \n";		// tabel data barang toko
	cout << "3.LEMARI\t "   <<"Rp 2.500.000       \n";
	cout << "4.RAK\t\t "    <<"Rp 2.200.000       \n";
	cout << "5.SOFA\t\t "   <<"Rp 5.750.000       \n";
	cout << "6.SPRINGBED\t "<<"Rp 6.230.000       \n";
	cout << "====================================="  ;
	
	cout << endl;
	cout << endl;
	cout << "---------------------------------------"<<endl;
	cout << endl;
	
	cout << "=====================================\n";
	cout << "  PROGRAM KASIR TOKO SUMBER MAKMUR \n";		// program kasir
	cout << "=====================================\n";
	
	cout << "Masukan nomor nota: ";
	cin  >> nota;
	
	cout << endl;
	
	cout << "Jumlah barang yang akan dibeli: ";
	cin  >> j;
	
	cout << endl;
	
	for(i=0;i<j;i++){
		cout << "Nama barang: ";
		cin  >> namabarang[i];
		
		cout << "Jumlah: ";
		cin  >> jumlah[i];
		
		cout << "harga satuan: ";
		cin >> harga[i];
		
		cout << endl;
		
		if (namabarang[i] == "meja" || namabarang[i] == "MEJA"){
		namabarang[i] = "Meja";
			
		}
		else if (namabarang[i] == "kursi" || namabarang[i] == "KURSI"){
		namabarang[i] = "Kursi";
			
		}
		else if (namabarang[i] == "lemari" || namabarang[i] == "LEMARI"){
		namabarang[i] = "Lemari";
			
		}
		else if (namabarang[i] == "rak" || namabarang[i] == "RAK"){
		namabarang[i] = "Rak ";
			
		}
		else if (namabarang[i] == "sofa" || namabarang[i] == "SOFA"){
		namabarang[i] = "Sofa";
			
		}
		else if (namabarang[i] == "springbed" || namabarang[i] == "SPRINGBED"){
		namabarang[i] = "S.Bed";
			
		}
		else{
		namabarang[i] = "INVALID";
		harga[i] = 0;
		}
	}

	system("cls");
	
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "TOKO SUMBER MAKMUR" << endl;
	cout << "Jl. Lengkong Gudang No. 61, Serpong, Kota Tangerang Selatan" << endl;
	cout << "Telp. 021-563478"   << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Nama Barang\t\t jumlah\t\t Harga Satuan\t\t Total\t\t\t " << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	
	for(i=0;i<j;i++){
	cout<<namabarang[i]<<"\t\t\t  "<<jumlah[i]<<"\t\t  "<<harga[i]<<"\t\t"<<total(jumlah,harga,x)<<endl;
	x++;
	}
	cout << "-------------------------------------------------------------------------------" << endl;

	cout << "Subtotal\t:Rp."	<<subtot(jumlah,harga,j);cout<<endl;
	cout << "Diskon\t\t:Rp."    <<disk  (jumlah,harga,j);cout<<endl;
	cout << "PPN\t\t:Rp."       <<ppn   (jumlah,harga,j);cout<<endl;
	grandtotal=subtot(jumlah,harga,j)-disk(jumlah,harga,j)+ppn(jumlah,harga,j);
	cout << "Grand Total\t:Rp." << grandtotal << endl;
	cout << "Bayar\t\t:Rp.";    cin >> bayar;
	cout << "Kembalian\t:Rp."   << bayar - grandtotal << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Terima Kasih Atas Kunjungan Anda" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	
	ofstream myfile;			// bagian menampilkan program dalam bentuk .txt
	myfile.open("Hasil Struk.txt");
	myfile << "-------------------------------------------------------------------------------" << endl;
	myfile << "TOKO SUMBER MAKMUR" << endl;
	myfile << "Jl. Lengkong Gudang No. 61, Serpong, Kota Tangerang Selatan" << endl;
	myfile << "Telp. 021-563478"   << endl;
	myfile << "-------------------------------------------------------------------------------" << endl;
	myfile << "Nama Barang\t\t\t  jumlah\t\t\tHarga Satuan\t\t\t Total\t\t\t " << endl;
	myfile << "-------------------------------------------------------------------------------" << endl;

	for(i=0;i<j;i++){
	myfile<<namabarang[i]<<"\t\t\t\t    "<<jumlah[i]<<"\t\t\t\t  "<<harga[i]<<"\t\t\t    "<<jumlah[i]*harga[i]<<endl;
	x++;
	}
	
	myfile << "-------------------------------------------------------------------------------" << endl;
	myfile << "Subtotal\t\t:Rp."<<subtot(jumlah,harga,j); myfile<<endl;
	myfile << "Diskon\t\t\t:Rp."<<disk(jumlah,harga,j);myfile<<endl;
	myfile << "PPN\t\t\t:Rp."<<ppn(jumlah,harga,j);myfile<<endl;
	grandtotal=subtot(jumlah,harga,j)-disk(jumlah,harga,j)+ppn(jumlah,harga,j);
	myfile << "Grand Total\t\t:Rp."<< grandtotal << endl;
	myfile << "Bayar\t\t\t:Rp.";myfile << bayar << endl;
	myfile << "Kembalian\t\t:Rp."<< bayar - grandtotal << endl;
	myfile << "-------------------------------------------------------------------------------" << endl;
	myfile << "Terima Kasih Atas Kunjungan Anda" << endl;
	myfile << "-------------------------------------------------------------------------------" << endl;
	myfile.close();
	
	getch();	
}
