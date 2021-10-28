#include<windows.h>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h> //for system("cls");
using namespace std;

void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
main()
{
cout<<"DD   DD          D          DDDD   DDDD  DD        DD   DDDD    DD  DDDD   DDDDDDDD DD   DD DDDD          D     DD        DD   \n";
cout<<"DD   DD         DDD         DD DD  DD DD  DD      DD    DD DD   DD  DD DD  DD DD DD DD   DD DD DD        DDD     DD      DD    \n";
cout<<"DD   DD        DD DD        DD  DD DD  DD  DD    DD     DD  DD  DD  DD  DD    DD    DD   DD DD  DD      DD DD     DD    DD     \n";
cout<<"DD   DD       DD   DD       DD  DD DD  DD   DD  DD      DD DD   DD  DD DD     DD    DD   DD DD   DD    DD   DD     DD  DD      \n";
cout<<"DDDDDDD      DDDDDDDDD      DD DD  DD DD     DDDD       DDDD    DD  DDDD      DD    DDDDDDD DD    DD  DDDDDDDDD     DDDD      \n";
cout<<"DDDDDDD     DDDDDDDDDDD     DDDD   DDDD       DD        DD DD   DD  DD DD     DD    DDDDDDD DD    DD DDDDDDDDDDD     DD        \n";
cout<<"DD   DD    DD         DD    DD     DD         DD        DD  DD  DD  DD  DD    DD    DD   DD DD   DD DD         DD    DD       \n";
cout<<"DD   DD   DD           DD   DD     DD         DD        DD   DD DD  DD   DD   DD    DD   DD DD  DD DD           DD   DD        \n";
cout<<"DD   DD  DD             DD  DD     DD         DD        DD  DD  DD  DD    DD  DD    DD   DD DD DD DD             DD  DD        \n";
cout<<"DD   DD DD               DD DD     DD         DD        DD DD   DD  DD     DD DD    DD   DD DDDD DD               DD DD        \n";
cout<<"\n\n\n\n";
int i;
 char h=3;
 system("color e0");
 system("color e0"); //f->white background, 12->purple text
 cout<<"\t\t\tFrom: Cun with love\n";
 Sleep(2000);
 cout<<"\t\t\tTo  : DUY\n\n";
 Sleep(2000);
 cout<<"\t\t";
 for(i=0;i<4;i++)
 cout<<"_";
 cout<<"\n\n";
 system("color c0 "); //f->white background, 65->light blue text

 Sleep(2000);
 cout<<"\t\t\t\ti i i i i\n";
 
 Sleep(2000);
 cout<<"\t\t\t\ti i i i i\n";
 
 Sleep(2000);
 cout<<"\t\t\t      __i_i_i_i_i__\n";
 
 Sleep(2000);
 cout<<"\t\t\t     |"<<h<<"           "<<h<<"|\n";
 
 Sleep(2000);
 cout<<"\t\t\t   __| "<<h<<"  27/10  "<<h<<" |__\n";
 
 Sleep(2000);
 cout<<"\t\t\t  | "<<h<<"   "<<h<<"       "<<h<<"   "<<h<<" |\n";

 Sleep(2000);
 cout<<"\t\t\t__|"<<h<<"   HAPPY     "<<h<<"   "<<h<<"|__\n";

 Sleep(2000);
 cout<<"\t\t       | "<<h<<"   "<<h<<"     BIRTHDAY    "<<h<<" |\n";

 Sleep(2000);
 cout<<"\t\t       |"<<h<<"  "<<h<<"     "<<h<<"    "<<h<<"     "<<h<<"   "<<h<<"|\n"; 
 
 
 Sleep(2000);
 cout<<"\t\t       | "<<h<<" "<<h<<" "<<h<<" "<<h<<" DUY "<<h<<" "<<h<<" "<<h<<" "<<h<<" |\n";
    
 Sleep(2000);
 cout<<"\t\t       |_________________________|\n";    
    
 cout<<"\n\n\n\n\n"; 




 string ngiu;
	while (true)
	{
		system("color 80");
		cout << endl << endl;
		cout << "\t\tDUY ";
		getline(cin, ngiu);
		if (ngiu == "18 years old")
		{
			cout << "\t\t---HAPPY BIRTHDAY!---" << endl <<endl;
			cout << "\t\tHAPPY BIRTHDAY" << endl;
			Sleep(1000);
			cout << "\t\tHAPPY BIRTHDAY" << endl; Sleep(1000);
			
			cout << "\t\tHAPPY BIRTHDAY..." << endl << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while(true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("C:\\Users\\DELL\\Downloads\\97.txt", ios_base::in); //import file thì copy đường dẫn rồi đổi \ thành \\ hoặc /
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(30); 
                
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

				//============ Ảnh thứ 2,3,4... thì copy từ "ifstream file" tới "file.close();" rồi đổi tên "file" và "line" lại ===========
				ifstream file2;
				file2.open("C:\\Users\\DELL\\Downloads\\98.txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(30);
                    
				}
                
                
				file2.close();
				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("C:\\Users\\DELL\\Downloads\\95.txt", ios_base::in);
				string line3;
				while (getline(file3, line3)) {
					cout << line3 << endl;
					Sleep(30); 
				}
				file3.close();


				
			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl << endl;
			system("pause");
		}
	}
    return 0;
}