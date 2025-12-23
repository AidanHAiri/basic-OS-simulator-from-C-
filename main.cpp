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
		    cout<<"masukkan username anda:  ";
		    cin >> baseusrname[i];
		    cout << "masukkan password anda:  ";
		    cin >> basepwd[i];
		    i++;
		    cout << "Buat akun baru?(y/n)  ";
		    cin >> Loop;
	    }
    	while (i < 10 && Loop == 'y');
    }
};

class command {
    public:
    void basic(){
        int perintah;
        cout << "masukkan perintah anda(angka)\n1. \n2. \n3. \n";
        cin >> perintah;
        switch (perintah){
            case 1 :
            cout << "Perintah 1\n";
            break;
            case 2 :
            cout << "perintah 2\n";
            break;
            default :
            cout << "perintah tidak ada dalam basic, silahkan berpindah ke mode advance";
            break;
        };
    };        
};
int main(){
	string usrnamelogin;
	daftar X;
	string pwd;
    int v;
    
    
    cout << "Selamat datang di Si-OS\n>>";
    cin >> pwd;
    
    if (pwd == "login"){
	cout << "Login\nmasukkan username anda:  ";
	cin >> usrnamelogin;
	cout << "masukkan password anda:  ";
	cin >> pwd;
	}
	else if (pwd == "signup"){
	X.akun();	
	}
    
	
    
    	
	
	bool verifikasi = false;
	for (int i=0; i<10; i++){
		if (usrnamelogin == X.baseusrname[i] && pwd == X.basepwd[i]){
		verifikasi = true;
        v = i;
		break;
		} 
	
	}
    
	command command;
	if (verifikasi){
		#ifdef _WIN32
		system("cls");
		#else
        system ("clear");
        #endif
        
		cout << "selamat datang kembali " <<X.baseusrname[v];
        
	}
	else {
        #ifdef _WIN32
		system("cls");
		#else
        system ("clear");
        #endif
		cout << "username atau password salah";
        exit(1);
	}
	
	string userprofile;
        cout << "\nchoose your profile";
        cin >> userprofile;
    
        if (userprofile == "basic"){
        command.basic();}
        else if (userprofile == "advance"){
        cout << "fitur ini belum tersedia";}
        else {
        cout << "command anda salah";}

    
    return 0;
}
