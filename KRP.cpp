#include "KRP.h"
// YAPICI
SFRL::SFRL(int s) {
setSayi(s);
// ARRAYE ATA
index[0] = (birler() + 7) * 10;
index[1] = (onlar() + 7) * 10;
index[2] = (yuzler() + 7) * 10;
index[3] = (binler() + 7) * 10;
}
// SETTER - GETTER
void SFRL::setSayi(int s_a) { sayi = s_a; }
int SFRL::getSayi()const { return sayi; }
// BASAMAKLARINA AYIR
int SFRL::binler()const { return sayi / 1000; }
int SFRL::yuzler()const { return (sayi % 1000) / 100; }
int SFRL::onlar()const { return ((sayi % 1000) % 100) / 10; }
int SFRL::birler()const { return (((sayi % 1000) % 100) % 10) / 1; }
// YAZDIR
void SFRL::ShowInfos()const {
	std::cout << "------------------------------------";
	std::cout << std::endl;
	std::cout << "Girdiginiz Sayi:" << getSayi();
	std::cout << std::endl;
	std::cout << "Sifrelenmis Hali:" << index[2]<<"-"<< index[3]<<"-"<< index[0] <<"-"<< index[1];
	std::cout << std::endl;
	std::cout << "------------------------------------";
	std::cout << std::endl;
}
// YIKICI
SFRL::~SFRL() {
	sayi = NULL;
	index[0] = NULL; index[1] = NULL; index[2] = NULL; index[3] = NULL;
}
/*----------------------------------------------------------------------------------------*/

SFRC::SFRC(int ind0, int ind1, int ind2, int ind3) {
	setIndex0(ind0); setIndex1(ind1); setIndex2(ind2); setIndex3(ind3);
// ARREYE ATA
	index[0] = (getIndex0() / 10) - 7;
	index[1] = (getIndex1() / 10) - 7;
	index[2] = (getIndex2() / 10) - 7;
	index[3] = (getIndex3() / 10) - 7;
}
// SETTER - GETTER
void SFRC::setIndex0(int i_n0) { index0 = i_n0; }
void SFRC::setIndex1(int i_n1) { index1 = i_n1; }
void SFRC::setIndex2(int i_n2) { index1 = i_n2; }
void SFRC::setIndex3(int i_n3) { index1 = i_n3; }
int SFRC::getIndex0()const { return index0; }
int SFRC::getIndex1()const { return index1; }
int SFRC::getIndex2()const { return index2; }
int SFRC::getIndex3()const { return index3; }
// YAZDIR
void SFRC::ShowInfos()const {
	std::cout << "------------------------------------";
	std::cout << std::endl;
	std::cout << "Girilen Sifre:" << getIndex0() << "-" << getIndex1() << "-" << getIndex2() << "-" << getIndex3();
	std::cout << std::endl;
	std::cout << "Sifre cozumu:" << index[2] << index[3] << index[0] << index[1];
	std::cout << std::endl;
	std::cout << "------------------------------------";
	std::cout << std::endl;
}
// YIKICI
SFRC::~SFRC() {
	index0 = NULL; index1 = NULL; index2 = NULL; index3 = NULL;
	index[0] = NULL; index[1] = NULL; index[2] = NULL; index[3] = NULL;
}
