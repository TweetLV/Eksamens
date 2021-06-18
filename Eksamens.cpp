#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int skaits;
	char atbilde;
	int jaut1,jaut2,jaut3,jaut4,jaut5,jaut6,jaut7,jaut8,jaut9,jaut10;
	int pareizi=0, nepareizi=0;
	//jautâjums
	cout<<"1. jautajums \n\n";
	cout<<"Kads iznakums ir for cikla i mainigajam \n\n";
	cout<<"for(int i=1; i<15; i=i+3) \n";
	
	//Atbildes
	cout<<"a) 15 \n";
	cout<<"b) 1471013 \n";
	cout<<"c) 1370131 \n";
	cout<<"d) 51 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'b': case 'B':
			pareizi++; getch();
			skaits++;
			break;
		case 'a': case 'A': case 'c': case 'C':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut1++;
			break;
		cout<<"\n drikst atbildet ar a,b,c,d \n\n";
	}
	}
	skaits=0;
	//notira ekranu
	system("CLS");
	
	cout<<"Visi jautajumi ir atbildeti! \n\n";
	switch(pareizi){
		case 10:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ perfekti punkti";
		break;
		case 9:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ gandriz perfekti punkti";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem";
		break;
		case 8:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ loti labi punkti";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem";
			break;
		case 7:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ labi punkti";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem";
		break;
		case 6:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ gandriz labi punkti";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem";
		break;
		case 5: case 4:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ viduveji punkti";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem";
		break;
	 	case 3: case 2: case 1: case 0 :
			cout<<"Pareizi ir "<<pareizi<<" no 10/ slikti punkti(nesekmigs)";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem";
		break;
		
	}		
}
