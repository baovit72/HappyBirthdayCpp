#pragma comment( lib, "Winmm.lib" )
#include<iostream>
#include<Windows.h>
#include<thread>
#include<string>
#include<chrono>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

//From Mr.Bao
//Di chuyen cursor den diem X,Y
void gotoXY(int X, int Y) {
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//In chu theo tu 
void letterByLetter(string str, duration<double> time = 0.1s) {
	for (int i = 0; i < str.length(); i++) {
		cout << str[i];
		sleep_for(time);
	}
	cout << endl;
}
void showLoiChuc() {
	string loichuc1 = "Blableu.....";
	string loichuc2 = "DDannj->>>>>>>>>>DDanj";
	string chucTo = "DatDuyen";
	string chucFrom = "Mr.Bao";
	letterByLetter(loichuc1);
	 
	letterByLetter(loichuc2);
	letterByLetter(chucTo);
	letterByLetter(chucFrom, 0.2s);
}
void logOut() {
	system("shutdown -l");
}
int main() {
	//Them nhac thi dung 
	PlaySound("something.wav", NULL, SND_ASYNC);
	gotoXY(15, 15);
	showLoiChuc();
	system("pause");

	return 0;
}