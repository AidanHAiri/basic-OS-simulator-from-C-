#include <iostream>
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
	int i = 0;
	string usrnamelogin;
	daftar X;
	string pwd;
    X.akun();
	
	
	
	
	cout << "Login\nmasukkan username anda:  ";
	cin >> usrnamelogin;
	cout << "masukkan password anda:  ";
	cin >> pwd;
	
	
	bool verifikasi = false;
	for (int i=0; i<10; i++){
		if (usrnamelogin == X.baseusrname[i] && pwd == X.basepwd[i]){
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
