#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;

//Vào trang wed : https://www.ascii-art-generator.org/ để chuyển ảnh sang file .txt


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


int main()
{
	string VN;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\t---XIN CHAO BAN  ? ";
		getline(cin, VN);
		if (VN == "CHAO")
		{
			cout << "\t\t---It only takes a second to say I love you, but it will take a lifetime to show you how much.---" << endl << endl;
			cout << "\t\t---SO I wanna be the one holding your heart...." << endl<< endl;
			Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl; Sleep(1000);
			cout << "\t\tHELLO //('-')//\\('-')\\\\..." << endl << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while (true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("C:\\Users\\trung\\Downloads\\banner (2).txt", ios_base::in); //import file thì copy đường dẫn rồi đổi \ thành \\ hoặc /
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(70);
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

				//============ Ảnh thứ 2,3,4... thì copy từ "ifstream file" tới "file.close();" rồi đổi tên "file" và "line" lại ===========
				ifstream file2;
				file2.open("C:\\Users\\trung\\Downloads\\banner (1).txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(70);
				}
			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl << endl;
			system("pause");
		}
	}
}