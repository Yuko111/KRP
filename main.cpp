#include <iostream>
#include "KRP.h"

int main() {
	int menu = NULL;
	int sayi = NULL;
	int index0 = NULL; int index1 = NULL; int index2 = NULL; int index3 = NULL;

	do {

		std::cout << "KRIPTOLOJI UYGULAMASI";
		std::cout << std::endl;
		std::cout << "------------------------------";
		std::cout << std::endl;
		std::cout << "1 - SIFRELE";
		std::cout << std::endl;
		std::cout << "2- SIFRE COZ";
		std::cout << std::endl;
		std::cout << "------------------------------";
		std::cout << std::endl;
		std::cout << "Seciminizi Yapiniz:";
		std::cin >> menu;

		if (menu == 1) {
			
			std::cout << "---------------------------";
			std::cout << std::endl;
			std::cout << "Dort Haneli Bir Sayi Giriniz:";
			std::cin >> sayi;
			
			SFRL Crp(sayi);
			Crp.ShowInfos();
			Crp.~SFRL();
		}
		 if (menu == 2) {
			
			std::cout << "--------------------------";
			std::cout << std::endl;
			std::cout << "Sifrelenmis Sayilari Giriniz(her '-' icin enter basiniz. ):";
			std::cin >> index0 >> index1 >> index2 >> index3;
			
			SFRC Dcrp(index0, index1, index2, index3);
			Dcrp.ShowInfos();
			Dcrp.~SFRC();
		}
		 if (menu == 3) {
			break;
		 }


	} while (true);

	return 0;
}
