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
		Menu();
		void poll(string x); // Task parser!
		void worm();
		void werm();
		void Howard(string x);
		void blair(string x); // Howard's wife
		void Reader(); // The Reader		
}; 
void Menu::blair(string x){
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
void Menu::werm(){
	string x;
	string j = "--|---------> ";
	point = j;
	cout<<(point);
	cin>>(x);
	blair(x);	
}
void Menu::Reader(){
	cout<<"Reader: On\n";
	string j = "--|---------> ";
	point = j;
	string x;
	cout<<point;
	cin>>(x);
	blair(x);
}
void Menu::worm(){
	string x;
	string g = "------------> ";
	point = g;
	cout<<point;
	cin>>(x);
	poll(x);	
}
void Menu::poll(string x){
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
		NULL;		
	}
	else {
		cout<<("Waht?\n");
		worm();		
}
}
Menu::Menu(){
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
int main(){
	Menu menu;
}
