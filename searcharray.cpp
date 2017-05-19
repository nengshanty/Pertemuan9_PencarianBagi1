#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int b,cari,ketemu;


int main (){

int A[10];
cout<<"Masukkan Data : \n";
for(b=0;b<10;b++){
    cout<<"A["<<b<<"] = "; cin >> A[b];
}
cout << "Masukan data yang akan dicari : ";
cin >>cari;
int i = 0;
while(i<10 && A[i] != cari){
	i++;
	if (A[i] == cari){
		cout << "Data ditemukan di elemen ke "<< i;
	} else {
		cout << "Data tidak ditemukan";
	}
 return 0;	
}
/*for()
{
	if(A[i]==cari)
	
{

	ketemu=1;
	cout <<"Data ditemukan"<<i;	
}
}
if (ketemu==0){
	cout<<"Data tidak ditemukan";
}*/

}

