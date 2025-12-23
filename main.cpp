#include <iostream>
#include <cstdlib>
using namespace std;

class daftar{
public:
    string baseusrname[10];
	string basepwd[10];
    int i = 0;
    char Loop;
    
    void akun(){
        do {
		    cout<<"masukkan  username anda:  ";
		    cin >> baseusrname[i];
		    cout << "masukkan password anda:  ";
		    cin >> basepwd[i];
		    i++;
		    cout << "Buat akun baru?(y/n)  ";
		    cin >> Loop;
	    }
    	while (i < 10 && Loop != 'n');
    }
};

int main(){
	string usrnamelogin;
	daftar X;
	string pwd;
    int v;
    
    
    cout << "Selamat datang di Si-OS\n";
    
    
    
    X.akun();
	
    
    
	cout << "Login\nmasukkan username anda:  ";
	cin >> usrnamelogin;
	cout << "masukkan password anda:  ";
	cin >> pwd;
	
	
	bool verifikasi = false;
	for (int i=0; i<10; i++){
		if (usrnamelogin == X.baseusrname[i] && pwd == X.basepwd[i]){
		verifikasi = true;
        v = i;
		break;
		} 
	
	}
    
	
	if (verifikasi){
        system ("clear");
		cout << "selamat datang kembali " <<X.baseusrname[v];
	}
	else {
        system ("clear");
		cout << "username atau password salah";
	}
	
	
	return 0;
}
