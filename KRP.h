#ifndef _KRP_H_
#define _KRP_H_
#include <iostream>


class KRP {
protected: int index[4];
};

class SFRL: public KRP {
	int sayi;
public:
	explicit SFRL(int);
	void setSayi(int);
	int getSayi()const;
	int binler()const;
	int yuzler()const;
	int onlar()const;
	int birler()const;
	void ShowInfos()const;
	~SFRL();
};

class SFRC: public KRP {
	int index0, index1, index2, index3;
public:
	explicit SFRC(int, int, int, int);
	void setIndex0(int);
	void setIndex1(int);
	void setIndex2(int);
	void setIndex3(int);
	int getIndex0()const;
	int getIndex1()const;
	int getIndex2()const;
	int getIndex3()const;
	void ShowInfos()const;
	~SFRC();
};
#endif 
