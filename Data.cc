/* Environment prototype */
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<utility>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Data{ // Class data declared here
	private:
		string line;
		string peppi;
	public:
		Data(); // Constructor declared here
		void stats(); // Stat func declared here
		void ling(); // ling declared here
		void hagrid(); // Hagrid declared here
};
void Data::hagrid(){ // The arrow declaration
	string x = "---------------> ";
	peppi = x;
	ling();
}
void Data::ling(){ // Ling (Parser) declared here
	string x;
	cout<< "Type In Your Desired Operation:\n";
	string opp [] = {"Status","Chomp","Store","Help"};
	for(int u = 0;u<=3;u++){
		printf("	%s",opp[u].c_str());
	}
	cin>>(x);
	if(x == "Status"){
		stats();		
	}
	if(x == "Chomp") {
		cout<<"You selected Chomp!\n";
		hagrid();
}
	if(x == "Store"){
		cout<<"You selected the storage option\n";
		hagrid();
}
	if(x == "Help") {
		cout<<"You selected the help assistant\n";
		hagrid();
}
	else {
		cout<<"Waht?\n";
		hagrid();	
	}
}
Data::Data(){ // class constructor called here
	string s = "Insert sequence: "; 
	printf("%s\n",s.c_str());
	string g;
	line = g;
	cin>>(g);
}
void Data::stats(){ // Stats called here
	cout<<"Sequence Status:\n\n";
	// ASDQWERFDVRFRKDASLDL
}
class Menu{ // Class Menu declared here
	private:
		string point;
	public:
 		void aff(string);
		Menu(); // Constructor
		void poll(string x); // Task parser!
		void worm(); // poll boomerang
		void werm(); // Reader boomerang
		void blair(string x); // Howard's wife
		void Reader(); // The Reader(GenInfo);		
};
void Menu::blair(string x){ // Blair declared here
	if(x == "Dir") {
		cout<<"You choosed Dir!\n";
		werm();
		// generate new instance of Data class
}
	if(x == "Ifile") {
		cout<<"You selected to read from file!\n";
		werm();
}
	if(x == "Help") {
		// Develop Help assistant class
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
		cout<<"You chose the genomics frameworks\n";
		worm();
		// In main layer					
	}
	if(x == "Dprt"){
		cout<<"Dprt\n";// Second Layer
		worm();
	}
	if(x == "Reader") {
		// Create Reader machinery;
		Reader();		
	}
	if(x == "exit") {
		cout<<"Exiting .....\n";
			// Find exiting pattern		
		exit (EXIT_SUCCESS);	
	}            
	if(x == "Help") {
		cout<<("You chose Help!\n");
		worm();
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
