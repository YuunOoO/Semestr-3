#include <iostream>
#include <string>
 
 using namespace std;
 
int main()
{
	string frazaglowna, wyrazszukany, wyrazszukany2;
	bool w1,w2;
	frazaglowna = "ala ma kota";
	w1 = w2 = false;
	cout << "Fraza do przeszukania: "<< frazaglowna << endl;
	cout << "Wprowadz 1 szukany wyraz: ", cin >> wyrazszukany;
	cout << "Wprowadz 2 szukany wyraz: ", cin >> wyrazszukany;
	
	if(frazaglowna.find(wyrazszukany) != std::string::npos && frazaglowna.find(wyrazszukany2) != std::string::npos)
	cout << "Oba wyrazy znalezione!"<<endl;
	else cout << "Wyrazy nieznalezione!"<<endl;
	
	
	
	
}
