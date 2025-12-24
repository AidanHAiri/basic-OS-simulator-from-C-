#include <iostream>
#include <cstdlib>
using namespace std;

class daftar{
public:
    string baseusrname[10]={"haidar"};
	string basepwd[10]={"haidar"};
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
    	while (i < 10 && Loop != 'n');
    }
};

class command {
    public:
    void basic(){
        int perintah;
        bool ulangi = true;
        while (ulangi){
        cout << "masukkan perintah anda(angka)\n1.Version \n2.Clear \n3.Exit \n";
        cin >> perintah;
        switch (perintah){
            case 1 :
            cout << "Si-OS versi 0\n";
            break;
            case 2 :
            cout << "perintah 2\n";
            #ifdef _WIN32
            system ("cls");
            #else
            system ("clear");
            #endif
            break;
            case 3 :
            ulangi = false;
            break;
            default :
            cout << "perintah tidak ada dalam basic, silahkan berpindah ke mode advance";
            break;
        };
        };
    };        
};

int main(){
	string usrnamelogin;
	daftar X;
	string pwd, earlycommand;
    int v;
    bool verifikasi = false;
    command command;
    
    
    cout << "Selamat datang di Si-OS\n";
    
    do{
        cout << ">>";
        cin >> earlycommand;
    
        if (earlycommand == "login"){
            cout << "Login\nmasukkan username anda:  ";
	        cin >> usrnamelogin;
            cout << "masukkan password anda:  ";
	        cin >> pwd;
	        verifikasi = true;
        }
        
	    else if (earlycommand == "signup"){
	    X.akun();
	    verifikasi = false;
	    }
	    
	    else {
	    cout << "command not available\n";
	    verifikasi = false;
	    };
    }
    while (verifikasi == false);
	
    
	
	for (int i=0; i<10; i++){
		        if (usrnamelogin == X.baseusrname[i] && pwd == X.basepwd[i]){
		        verifikasi = true;
                v = i;
		        break;
		        }
		        else {
		            verifikasi = false;
		        }
	}

	
	
    
	
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
	
	
	
	
	
	bool ulangi = true;
    string userprofile;
    while (ulangi){
        cout << "\nchoose your profile\n";
        cin >> userprofile;
    
        if (userprofile == "basic"){
            command.basic();}
        else if (userprofile == "advance"){
            cout << "fitur ini belum tersedia";
        }
        else if (userprofile == "logout") {
            ulangi = false;
        }
        else {
        cout << "command anda salah";}
    }
    
    return 0;
}
