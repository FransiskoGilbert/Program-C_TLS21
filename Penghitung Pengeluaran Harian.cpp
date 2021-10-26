#include<iostream>
#include<stdio.h>

using namespace std;

//penghitungan pengeluaran hari ini
int biaya, biaya_total, biaya_transport, x, y, n, i, total_belanja, belanja, biaya_makan, biaya_sarapan, biaya_siang, biaya_malam, biaya_ngemil, biaya_angkutan, biaya_bensin;

int main (){
	cout<<"Apakah anda ingin menghitung pengeluaran anda hari ini? (0 untuk tidak, 1 untuk iya): ";
	cin>>y;
	i=1;
		if(y==1) {
				cout<<"menghitung biaya makan hari ini\n";
				cout<<"Masukkan biaya sarapan anda hari ini: Rp";
				cin>>biaya_sarapan;
				cout<<"masukkan biaya makan siang anda hari ini: Rp";
				cin>>biaya_siang;
				cout<<"masukkan biaya makan malam anda hari ini: Rp";
				cin>>biaya_malam;
				cout<<"masukkan total biaya ngemil anda hari ini: Rp";
				cin>>biaya_ngemil;
				biaya_makan= biaya_sarapan + biaya_siang + biaya_malam + biaya_ngemil;
				cout<<"\nmenghitung biaya transportasi hari ini\n";
				cout<<"masukkan biaya angkutan non pribadi hari ini: Rp";
				cin>>biaya_angkutan;
				cout<<"masukkan biaya bensin anda hari ini: Rp";
				cin>>biaya_bensin;
				biaya_transport= biaya_angkutan + biaya_bensin;
				cout<<"\nmenghitung biaya belanja hari ini \nberapa kali anda belanja hari ini?";
				cin>>n;
				total_belanja=0;
				for(i=1 ; i<=n ; i++)
				{
				cout<<"total belanja "<<i<<": Rp";
				cin>>belanja;
				total_belanja=total_belanja + belanja;	
				}
				cout<<"total seluruh belanja anda hari ini: Rp"<<total_belanja;
				cout<<"\nJadi pengeluaran anda hari ini adalah: Rp"<<biaya_makan + biaya_transport + total_belanja;
				cout<<"\ndengan rincian: \n";
				cout<<"total pengeluaran makan anda hari ini adalah: Rp"<<biaya_makan;
				cout<<"\ntotal pengeluaran transport anda hari ini adalah: Rp"<<biaya_transport;
				cout<<"\ntotal pengeluaran belanja anda hari ini adalah: Rp"<<total_belanja;
			}
		else if(y==0){
		 	cout<<"understandable, have a great day";
		 	}
		else{
		 	cout<<"masukin angka yang benar lah..";
		 	}
	cout<<"\nApakah anda ingin menggunakan Aplikasi ini lagi (0 untuk tidak, 1 untuk iya)";
	cin>>x;
	if(x==1){
		main();
	}
	else if(x==0){
		cout<<"terima kasih sudah menggunakan aplikasi ini :)";
	}
	else{
		cout<<"tolong input angka dengan benar";
	}
}
