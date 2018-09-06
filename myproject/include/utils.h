#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Cutils
{
private:
	string message;
public:
	Cutils(){
		cout << "built" << endl;
	};
	//void printS(string message){cout << message << endl;}
	void printS(string message);
	
};