#include <iostream>
using namespace std;


int main(){
	int i = 0;
	char Loop;
	string usrnamelogin;
	string baseusrname[10];
	string basepwd[10];
	string pwd;
	
	
	do {
		cout<<"masukkan  username anda:\n";
		cin >> baseusrname[i];
		cout << "masukkan password anda";
		cin >> basepwd[i];
		i++;
		cout << "Tambah?";
		cin >> Loop;
	}
	while (i < 10 && Loop != 'n');
	
	
	cout << "Login\nmasukkan username anda";
	cin >> usrnamelogin;
	cout << "masukkan password anda";
	cin >> pwd;
	
	
	bool verifikasi = false;
	for (int i=0; i<10; i++){
		if (usrnamelogin == baseusrname[i] && pwd == basepwd[i]){
		verifikasi = true;
		break;
		} 
	
	}
	
	if (verifikasi){
		cout << "anda benar";
	}
	else {
		cout << "anda salah";
	}
	
	
	return 0;
}
