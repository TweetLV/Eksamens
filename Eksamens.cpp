#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int skaits=0;
	char atbilde;
	int jaut1=0,jaut2=0,jaut3=0,jaut4=0,jaut5=0,jaut6=0,jaut7=0,jaut8=0,jaut9=0,jaut10=0;
	int pareizi=0, nepareizi=0;
	//Sakums
	cout<<"Sveicinati For cikla zinasanu testa \n";
	//Pirmais jautâjums
	cout<<"1. jautajums \n";
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
			jaut1==0;
			break;
		case 'a': case 'A': case 'c': case 'C':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut1++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Otrais jautâjums
	cout<<"2. jautajums \n";
	cout<<"Kads ir for cikla sakuma skaitlis \n\n";
	cout<<"for(int j=20; j<40; j=j+3) \n";
	
	//Atbildes
	cout<<"a) 20 \n";
	cout<<"b) 40 \n";
	cout<<"c) 30 \n";
	cout<<"d) 3 \n\n";
	
	while(skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'a': case 'A':
			pareizi++; getch();
			skaits++;
			jaut2==0;
			break;
		case 'b': case 'B': case 'c': case 'C':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut2++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Tresais jautâjums
	cout<<"3. jautajums \n";
	cout<<"Kads ir for cikla beigu skaitla nosacijums \n\n";
	cout<<"for(int j=20; j<40; j=j+3) \n";
	
	//Atbildes
	cout<<"a) 20 \n";
	cout<<"b) 3 \n";
	cout<<"c) 30 \n";
	cout<<"d) 40 \n\n";
	
    while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'd': case 'D':
			pareizi++; getch();
			skaits++;
			jaut3==0;
			break;
		case 'b': case 'B': case 'c': case 'C':case 'a': case 'A':
			nepareizi++; getch();
			skaits++;
			jaut3++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Ceturtais jautâjums
	cout<<"4. jautajums \n";
	cout<<"Kads ir for cikla x iznakums \n\n";
	cout<<"for(int x=1; x<10; x++) \n";
	cout<<"cout<<x<<\" \"; \n";
	
	//Atbildes
	cout<<"a) 1 2 3 4 5 6 7 8 9 \n";
	cout<<"b) 123456789 \n";
	cout<<"c) 9 8 7 6 5 4 3 2 1 \n";
	cout<<"d) 987654321 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'a': case 'A':
			pareizi++; getch();
			skaits++;
			break;
		case 'b': case 'B': case 'c': case 'C':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut4++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Piektais jautâjums
	cout<<"5. jautajums \n";
	cout<<"Kads ir for cikla x iznakums \n\n";
	cout<<"for(int x=10; x>1; x--) \n";
	cout<<"cout<<x<<\" \"; \n";
	
	//Atbildes
	cout<<"a) 2345678910 \n";
	cout<<"b) 1098765432 \n";
	cout<<"c) 10 9 8 7 6 5 4 3 2 \n";
	cout<<"d) 2 3 4 5 6 7 8 9 10 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'c': case 'C':
			pareizi++; getch();
			skaits++;
			jaut5==0;
			break;
		case 'b': case 'B': case 'a': case 'A':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut5++;
			break;
	default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Sestais jautâjums
	cout<<"6. jautajums \n";
	cout<<"Kads ir for cikla z iznakums \n\n";
	cout<<"for(int z=10; z>1; z--) \n";
	cout<<"cout<<z; \n";
	
	//Atbildes
	cout<<"a) 2345678910 \n";
	cout<<"b) 1098765432 \n";
	cout<<"c) 10 9 8 7 6 5 4 3 2 \n";
	cout<<"d) 2 3 4 5 6 7 8 9 10 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'b': case 'B':
			pareizi++; getch();
			skaits++;
			jaut6==0;
			break;
		case 'C': case 'c': case 'a': case 'A':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut6++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Septitais jautâjums
	cout<<"7. jautajums \n";
	cout<<"Kads ir for cikla x iznakums \n\n";
	cout<<"for(int x=1; x<10; x++) \n";
	cout<<"cout<<x<<; \n";
	
	//Atbildes
	cout<<"a) 1 2 3 4 5 6 7 8 9 \n";
	cout<<"b) 9 8 7 6 5 4 3 2 1 \n";
	cout<<"c) 123456789 \n";
	cout<<"d) 987654321 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'c': case 'C':
			pareizi++; getch();
			skaits++;
			jaut7==0;
			break;
		case 'b': case 'B': case 'a': case 'A':case 'd': case 'D':
			nepareizi++; getch();
			skaits++;
			jaut7++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Astotais jautâjums
	cout<<"8. jautajums \n";
	cout<<"Kads ir for cikla y pedejais cipars ciparu rinda \n\n";
	cout<<"for(int y=40; y>25; y--) \n";
	cout<<"cout<<y<<\" \"; \n";
	
	//Atbildes
	cout<<"a) 34 \n";
	cout<<"b) 25 \n";
	cout<<"c) 40 \n";
	cout<<"d) 26 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'd': case 'D':
			pareizi++; getch();
			skaits++;
			jaut8==0;
			break;
		case 'C': case 'c': case 'a': case 'A':case 'b': case 'B':
			nepareizi++; getch();
			skaits++;
			jaut8++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Devitais jautâjums
	cout<<"9. jautajums \n";
	cout<<"Kads ir for cikla g pirmais cipars ciparu rinda \n\n";
	cout<<"for(int g=42; g<75; g=g+2) \n";
	cout<<"cout<<y<<\" \"; \n";
	
	//Atbildes
	cout<<"a) 44 \n";
	cout<<"b) 74 \n";
	cout<<"c) 42 \n";
	cout<<"d) 43 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'c': case 'C':
			pareizi++; getch();
			skaits++;
			jaut9==0;
			break;
		case 'd': case 'D': case 'a': case 'A':case 'b': case 'B':
			nepareizi++; getch();
			skaits++;
			jaut9++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	//Desmitais jautajums
	cout<<"10. jautajums \n";
	cout<<"Kads ir for cikla u piektais cipars ciparu rinda \n\n";
	cout<<"for(int u=500; u>75; u=u-15) \n";
	cout<<"cout<<y<<\" \"; \n";
	
	//Atbildes
	cout<<"a) 440 \n";
	cout<<"b) 435 \n";
	cout<<"c) 455 \n";
	cout<<"d) 500 \n\n";
	
	while (skaits == 0){
		cout<< "atbilde: "; cin>>atbilde;
	switch(atbilde){
		case 'a': case 'A':
			pareizi++; getch();
			skaits++;
			jaut10==0;
			break;
		case 'C': case 'c': case 'd': case 'D':case 'b': case 'B':
			nepareizi++; getch();
			skaits++;
			jaut10++;
			break;
		default:	
		cout<<"\n Drikst atbildet ar a,b,c,d \n\n";
		break;
	}
	}
	skaits=0;
	//Notira ekranu
	system("CLS");
	
	cout<<"Visi jautajumi ir atbildeti! \n\n";
	switch(pareizi){
		case 10:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ perfekti punkti \n";
		break;
		case 9:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ gandriz perfekti punkti \n";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem\n\n";
		break;
		case 8:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ loti labi punkti \n";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem\n\n";
			break;
		case 7:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ labi punkti \n";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem\n\n";
		break;
		case 6:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ gandriz labi punkti \n";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem\n\n";
		break;
		case 5: case 4:
			cout<<"Pareizi ir "<<pareizi<<" no 10/ viduveji punkti \n";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem\n\n";
		break;
	 	case 3: case 2: case 1: case 0 :
			cout<<"Pareizi ir "<<pareizi<<" no 10/ slikti punkti (nesekmigs) \n";
			cout<<"Zem iznakuma bus nepareizi atbildetie jautajumi ar pareizajam atbildem\n\n";
		break;	
	}		
	if(jaut1==1){
		cout<<"1. jautajums \n";
		cout<<"Kads iznakums ir for cikla i mainigajam \n";
		cout<<"for(int i=1; i<15; i=i+3) \n";
		cout<<"Pareiza atbilde ir b) 1471013 \n\n ";
	}
	if(jaut2==1){
		cout<<"2. jautajums \n";
		cout<<"Kads ir for cikla sakuma skaitlis \n";
		cout<<"for(int j=20; j<40; j=j+3) \n";
		cout<<"Pareiza atbilde ir a) 20 \n\n ";
	}
	if(jaut3==1){
		cout<<"3. jautajums \n";
		cout<<"Kads ir for cikla beigu skaitla nosacijums \n";
		cout<<"for(int j=20; j<40; j=j+3) \n";
		cout<<"Pareiza atbilde ir d)40 \n\n";
	}
    if(jaut4==1){
		cout<<"4. jautajums \n";
		cout<<"Kads ir for cikla x iznakums \n";
		cout<<"for(int x=1; x<10; x++) \n";
		cout<<"cout<<x<<\" \"; \n";
		cout<<"Pareiza atbilde ir a)1 2 3 4 5 6 7 8 9 \n\n";
	}
	if(jaut5==1){
		cout<<"5. jautajums \n";
		cout<<"Kads ir for cikla x iznakums \n";
		cout<<"for(int x=10; x>1; x--) \n";
		cout<<"cout<<x<<\" \"; \n";
		cout<<"Pareiza atbilde ir c)10 9 8 7 6 5 4 3 2 \n\n";
	}
	if(jaut6==1){
		cout<<"6. jautajums \n";
		cout<<"Kads ir for cikla z iznakums \n";
		cout<<"for(int z=10; z>1; z--) \n";
		cout<<"cout<<z; \n";
		cout<<"Pareiza atbilde ir b)1098765432 \n\n ";
	}
	if(jaut7==1){
		cout<<"7. jautajums \n";
		cout<<"Kads ir for cikla x iznakums \n";
		cout<<"for(int x=1; x<10; x++) \n";
		cout<<"cout<<x<<; \n";
		cout<<"Pareiza atbilde ir c)123456789 \n\n";
	}
	if(jaut8==1){
		cout<<"8. jautajums \n";
		cout<<"Kads ir for cikla y pedejais cipars ciparu rinda \n";
		cout<<"for(int y=40; y>25; y--) \n";
		cout<<"cout<<y<<\" \"; \n";
		cout<<"Pareiza atbilde ir d)26 \n\n";
	}
	if(jaut9==1){
		cout<<"9. jautajums \n";
		cout<<"Kads ir for cikla g pirmais cipars ciparu rinda \n";
		cout<<"for(int g=42; g<75; g=g+2) \n";
		cout<<"cout<<y<<\" \"; \n";
		cout<<"Pareiza atbilde ir c)42 \n\n";	
	}
	if(jaut10==1){
		cout<<"10. jautajums \n";
		cout<<"Kads ir for cikla u piektais cipars ciparu rinda \n";
		cout<<"for(int u=500; u>75; u=u-15) \n";
		cout<<"cout<<y<<\" \"; \n";
		cout<<"Pareiza atbilde ir a)440 \n\n";
	}
	
}
