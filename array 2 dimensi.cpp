#include <iostream>

using namespace std;

int main(){
	int a[2][2], b[2][2];
	cout << "Input matriks A ordo 2x2\n";
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout <<" Input nilai A["<<i<<"]["<<j<<"] = ";
			cin >> a[i][j];
		}
	}
	cout << endl; 
	cout << "Input matriks B ordo 2x2\n";
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout <<" Input nilai B["<<i<<"]["<<j<<"] = ";
			cin >> b[i][j];
		}
	}
	
	cout << endl;
	cout << "Matriks A ordo 2x2\n";
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
			cout << a[i][j]<<"\t";
		cout<<endl;
	}
	
	cout << endl;
	cout << "Matriks B ordo 2x2\n";
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
			cout << b[i][j]<<"\t";
		cout<<endl;
	}

return 0;
}
