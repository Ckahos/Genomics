/* Environment prototype */
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<utility>
#include<algorithm>
#include<stdio.h>
using namespace std;
class Menu{
	private:
		string point;
	public:
		void aff(string);
		Menu(); // Constructor
		void poll(string x); // Task parser!
		void worm(); // poll boomerang
		void werm(); // Reader boomerang
		void Howard(string x); // General data function;
		void blair(string x); // Howard's wife
		void Reader(); // The Reader(GenInfo);		
}; 
void Menu::blair(string x){ // Blair declared here
	if(x == "Dir") {
		// Direct input
}
	if(x == "Ifile") {
		// Read from file
}
	if(x == "exit") {
		worm();
}	
	else {
		cout<<"Waht?\n";
		werm();
}
}
void Menu::werm(){ // Werm declared here
	string x;
	string j = "--|---------> ";
	point = j;
	cout<<(point);
	cin>>(x);
	blair(x);	
}
void Menu::Reader(){ // Reader declared here
	cout<<"Reader: On\n";
	string j = "--|---------> ";
	point = j;
	string x;
	cout<<point;
	cin>>(x);
	blair(x);
}
void Menu::worm(){ // Worm declared here
	string x;
	string g = "------------> ";
	point = g;
	cout<<point;
	cin>>(x);
	poll(x);	
}
void Menu::poll(string x){ // poll declared here
	if( x == "Genomics"){
					
	}
	if(x == "Dprt"){
			
	}
	if(x == "Reader") {
		// Create Reader machinery;
		Reader();		
}
	if(x == "exit") {
		cout<<"Exiting .....\n";
			// Find exiting pattern		
	}
	else {
		cout<<("Waht?\n");
		worm();		
}
}
Menu::Menu(){ // Constructor declared here
	string d;
	string x = "----------> ";
	point = x;
	cout<<"Welcome to Dedalus 0.1 Data management Assistant!."<<endl;
	cout<<"Copyright: MadMan.\n";
	cout<<"----------------------------\n\n\n";
	cout<<point;
	cin>>(d);
	poll(d);
}
int main(){ // Main function
	Menu menu;
}
