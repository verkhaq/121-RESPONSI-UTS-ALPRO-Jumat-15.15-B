#include <iostream>
using namespace std;

int main(){
	string user;
	int pw, pilih;
	string nama = "reza";
	int NIM = 121;
	bool login = false;
	int i;
	string matkul[100];
	int n, nilai[100];
	int spp = 10000000;
	double beasiswa = 0.1*spp;
	int totalBayar = spp - beasiswa;
	
	cout<<"PORTAL UAD"<<endl;
	for(i=1; i<=3; i++){
	cout<<"Masukkan username : ";
	cin>>user;
	cout<<"Masukkan password : ";
	cin>>pw;
	


	if(user == nama && pw == NIM){
		login = true;
		i = 3;
	}else {
		cout<<"Coba lagi"<<endl;
	} 	
}
	
	
	do{
		cout<<"\nMenu"<<endl;
		cout<<"1.Biodata Mahasiswa"<<endl;
		cout<<"2.KRS Mahasiswa"<<endl;
		cout<<"3.Jadwal Kuliah"<<endl;
		cout<<"4.Nilai Mahasiswa"<<endl;
		cout<<"5.SPP Mahasiswa"<<endl;
		cout<<"6.Keluar"<<endl;
		cin>>pilih;
	
		switch(pilih){
			case 1:
				cout<<"NIM : 121"<<endl;
				cout<<"Nama : Reza"<<endl;
				cout<<"Prodi : Informatika"<<endl;
				cout<<"Fakultas : FTI"<<endl;
				break;
			case 2:
				cout<<"Masukkan jumlah matkul : ";
				cin>>n;
				
				for(i=1; i<=n; i++){
					cout<<"Mata Kuliah ke-"<<i<<endl;
					cin>>matkul[i];
				}
				
				for(i=1; i<=n; i++){
					cout<<"Mata Kuliah ke-"<<i<<" : "<<matkul[i]<<endl;
				}
				break;
			case 3:
				cout<<"Jadwal Kuliah"<<endl;
				
				for(i=1; i<=5; i++){
					cout<<"Mata Kuliah Hari ke-"<<i<<" : "<<endl;
					cin>>matkul[i];
				}
				
				for(i=1; i<=5; i++){
					cout<<"Mata Kuliah Hari ke-"<<i<<" : "<<matkul[i]<<endl;
				}
				
				break;
			case 4:
				cout<<"Nilai Mahasiswa"<<endl;
				cout<<"Masukkan jumlah matkul : ";
				cin>>n;
				cout<<"Masukkan matkul dan nilai"<<endl;
				for(i=1; i<=n; i++){
					cout<<"matkul : ";
					cin>>matkul[i];
					cout<<"nilai : ";
					cin>>nilai[i];
				}
				for(i=1; i<=n; i++){
					cout<<"Mata Kuliah : "<<matkul[i]<<" = "<<nilai[i]<<endl;
				}
				
				break;
			case 5:
				cout<<"SPP semester : Rp.10000000"<<endl;
				cout<<"potongan beasiswa : Rp.1000000"<<endl;
				cout<<"Total Pembayaran : Rp."<<totalBayar<<endl;
				break;
			case 6:
				cout<<"Anda keluar dari program";
				break;
			default:
				cout<<"Pilihan tidak valid"<<endl;
				break;
		}
	}while(pilih != 6);
	
	
	
	return 0;
}
