#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int kode;
	int p;
	int l;
	int t;
	int luas;
	int volume;
	char lagi;
	
	awal:
		system("cls");
		cout << "==========Hitung Luas & Volume Balok==========" << endl << endl;
		cout << "Rumus Luas : 2 * (p * l + p * t + l * t)" << endl;
		cout << "Rumus Volume : p * l * t" << endl << endl;
		cout << "Pilih :" << endl;
		cout << "1. Luas" << endl;
		cout << "2. Volume" << endl;
		
		cout << "Masukkan pilihan : ";
		cin >> kode;
		cout << endl;
		
		switch(kode){
			case 1 :
				cout << "++ Luas Balok ++" << endl;
				cout << "Masukkan p : ";
				cin >> p;
				
				if (p <= 0) {
					cout << "Input yang anda masukkan salah" << endl << endl;
					cout << "Mulai lagi (y/n) ? ";
					cin >> lagi;
						if(lagi=='Y' || lagi=='y'){
					        goto awal;
					    }
					    if (lagi=='N' || lagi=='n'){
					        goto selesai;
					    }
				}
				
				cout << "Masukkan l : ";
				cin >> l;
				
				if (l <= 0) {
					cout << "Input yang anda masukkan salah" << endl << endl;
					cout << "Mulai lagi (y/n) ? ";
					cin >> lagi;
						if(lagi=='Y' || lagi=='y'){
					        goto awal;
					    }
					    if (lagi=='N' || lagi=='n'){
					        goto selesai;
					    }
				}
				
				cout << "Masukkan t : ";
				cin >> t;
				
				if (t <= 0) {
					cout << "Input yang anda masukkan salah" << endl << endl;
					cout << "Mulai lagi (y/n) ? ";
					cin >> lagi;
						if(lagi=='Y' || lagi=='y'){
					        goto awal;
					    }
					    if (lagi=='N' || lagi=='n'){
					        goto selesai;
					    }
				}
				
				cout << endl;
				luas = 2 * (p * l + p * t + l * t);
				cout << "Luas Balok tersebut adalah " << luas << endl << endl;
				break;
				
			case 2 :
				cout << "++ Volume Balok ++" << endl;
				cout << "Masukkan p : ";
				cin >> p;
				
				if (p <= 0) {
					cout << "Input yang anda masukkan salah" << endl << endl;
					cout << "Mulai lagi (y/n) ? ";
					cin >> lagi;
						if(lagi=='Y' || lagi=='y'){
					        goto awal;
					    }
					    if (lagi=='N' || lagi=='n'){
					        goto selesai;
					    }
				}
				
				cout << "Masukkan l : ";
				cin >> l;
				
				if (l <= 0) {
					cout << "Input yang anda masukkan salah" << endl << endl;
					cout << "Mulai lagi (y/n) ? ";
					cin >> lagi;
						if(lagi=='Y' || lagi=='y'){
					        goto awal;
					    }
					    if (lagi=='N' || lagi=='n'){
					        goto selesai;
					    }
				}
				
				cout << "Masukkan t : ";
				cin >> t;
				
				if (t <= 0) {
					cout << "Input yang anda masukkan salah" << endl << endl;
					cout << "Mulai lagi (y/n) ? ";
					cin >> lagi;
						if(lagi=='Y' || lagi=='y'){
					        goto awal;
					    }
					    if (lagi=='N' || lagi=='n'){
					        goto selesai;
					    }
				}
				
				cout << endl;
				volume = p * l * t;
				cout << "Volume Balok tersebut adalah " << volume << endl << endl;
				break;
				
			default :
				cout << "Kode tersebut tidak ada dalam pilihan" << endl;
		}
    
    cout << "Mulai lagi (y/n) ? ";
	cin >> lagi;
		if(lagi=='Y' || lagi=='y'){
	        goto awal;
	    }
	    if (lagi=='N' || lagi=='n'){
	        goto selesai;
	    }
	    
	selesai:
	    system("cls");
	    cout<<"Selesai >.<"<<endl;
	
	cin.get();
	return 0;
}
