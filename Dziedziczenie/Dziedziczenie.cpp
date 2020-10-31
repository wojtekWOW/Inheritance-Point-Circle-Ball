
#include <iostream>

using namespace std;

const double PI=3.1415;
class Punkt
{
	float x, y;
	string nazwa;

public:
	void wyswietl()
	{
		cout << nazwa << "(" << x << "," << y << ")" << endl;
	}
	Punkt(string n="s" , float a=0, float b=0)
	{
		nazwa = n;
		x = a;
		y = b;
	}
};

class Kolo :public Punkt // klasa kolo dziedziczy publicznie z klasy punkt
{
	float r;
	string nazwa;

public:
	void wyswietl()
	{
		cout << "Kolo o nazwie: " << nazwa << endl;
		cout << "Srodek kola: " << endl;
		Punkt::wyswietl();
		cout << "Promien: " << r << endl;
		cout << "Pole kola: " << PI * r * r << endl;
	}
	Kolo(string nk ="kolo", string np= "S", float a=0, float b=0, float pr=1)
		:Punkt(np, a, b)
	{
		nazwa = nk;
		r = pr;
	}
};

class Kula :public Kolo
{
	float r;
	string nazwa;

public:
	void wyswietl()
	{
		cout << "Kula o nazwie: " << nazwa << endl;
		cout << "Srodek kuli: " << endl;
		Punkt::wyswietl();
		cout << "Promien: " << r <<  endl;
		cout << "Obietosc kuli: " << 4/3 * PI * r * r* r << endl;
	}
	Kula(string nk = "kula", string np = "S", float a = 2, float b = 2, float pr = 2)
		:Kolo(nk, np, a, b, pr)
	{
		r = pr;
		nazwa = nk;
	}
};
int main()
{
	Kolo k1;
	k1.wyswietl();
	Kula kula1;
	kula1.wyswietl();
	return 0;
}

