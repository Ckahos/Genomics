/* Environment prototype| Developed by MadMan.*/
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<utility>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Menu{ // Class Menu declared here
	private:
		string point,pep;
	public:
 		void aff(string);
		void app(); // Constructor
		void poll(string x); // Task parser!
		void worm(); // poll boomerang
		void werm(); // Reader boomerang
		void blair(string x); // Howard's wife
		void Reader(); // The Reader(GenInfo);		
		void Help(); // Help function(main)
		void Minion(); // Help minion function(recursive)
		void mama(); // Help mama function;(Parser)
		void Hilp(); // Hilp for the blair functions
		void larry(); // larry for the Hilp(recursive);
		void barry(); // barry for the Hilp(Parser);
};
void Menu::barry(){
	string x;
	cin>>(x);
	if(x == "Dir"){
		cout<<("You chose Dir info!\n");
		larry();
	}
	if(x == "Ifile"){
		cout<<"You chose Ifile info!\n";
		larry();
	}
	if(x == "exit"){
		werm();
	}
	else {
		cout<<"Waht?\n";
		larry();
	}
}
void Menu::larry(){
	string x = "---|---------: ";
	pep = x;
	cout<<(pep);
	barry();
	
}
void Menu::Hilp(){
	cout<<"Available Modes:\n";
	string x [] = {"Dir","Ifile"};
	for(int u = 0;u<= 1;u++){
		printf("		%s\n",x[u].c_str());
	}
	larry();
}
void Menu::mama(){
	string x;
	cin>>(x);
	if(x == "Reader"){
		cout<<"You chose Reader Info!\n";
		Minion();	
	}
	if(x == "Genomics"){
		cout<<"You chose Genomics info\n";
		Minion();
	}
	if(x == "Dprt"){
		cout<<"You chose Dprt Info!\n";
		Minion();
	}
	if(x == "exit"){
		worm();
	}
	else {
		cout<<"Waht?\n";
		Minion();
	}
}
void Menu::Minion(){
	string f = "---------------: ";
	pep = f;
	cout<<pep;
	mama();
}
void Menu::Help(){
	cout<<"Available Modes: \n";
	string ll [] = {"Reader","Dprt","Genomics"};
	for(int u = 0;u<= 2;u++){
		printf("		%s\n",ll[u].c_str());
	}
	Minion();

}
void Menu::blair(string x){ // Blair declared here
	if(x == "Dir") {
		cout<<"You selected Dir!\n";
		werm();	
}
	if(x == "Ifile") {
		cout<<"You selected to read from file!\n";
		werm();
}
	if(x == "Help") {
		//cout<<"You chose Help\n";
		Hilp();
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
		Help();
	}
	else {
		cout<<("Waht?\n");
		worm();		
}
}
void Menu::app(){ // Opening screen declared here
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
	menu.app();
}
