#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
	std::ofstream save("datakun.txt", ios::app);
	std::string usernameinput, usernameoutput, passwordinput, passwordoutput, repeat;
	
	
	
	

	do{
		if (save.is_open()){
			std::cin >> usernameinput;
			std::cin >> passwordinput;
			save << usernameinput << " " << passwordinput << "\n";
			std::cout << "file berhasil diinput";
			
		}
		else { std::cout << "file gagal diinput";};
		std::cout << "ulangi?\n";
		std::cin >> repeat;
	}
	while (repeat != "n");
	save.close();
	
	ifstream load("datakun.txt");
	
	cin >> usernameoutput;
	cin >> passwordoutput;
	while (load >> usernameinput >> passwordinput){
		if (usernameinput==usernameoutput && passwordinput==passwordoutput){
			cout << "anda login";
			break;
		};
	}
	
	
	return 0;
}
