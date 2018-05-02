#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<utility>
#include<iomanip>
using namespace std;
class Check{
	private:
		string a;
	public:
		string Snatch(string);
};
string Check::Snatch(string x){
	a = x;
	int d = 0;
	char amin [] = {'R','N','D','E','Q','H','O','I','L','K','M','F','P','S','W','Y','V'};
	for(int u = 0;u<=(sizeof(amin) - 1);u++){
		float i  = count(x.begin(),x.end(),amin[u]);
		if(i != 0){
			d++;
		}
	}
		return (d != 0)? "Aminoacid":"Nucleotide";
}
class Rodd{
	private:
		string x;
	public:
		void Polar(string);
		Rodd(string);
};
Rodd::Rodd(string a){
	x = a;
	vector<pair<char,float> > V;
	vector<pair<char,float> >::iterator all;
	char kk [] = {'A','R','N','D','C','E','Q','G','H','O','I','L','K','M','F','P','U','S','T','W','Y','V'};
	cout<< "-----------------------\n";
	cout<<"Stats: \n";
	for(int u = 0;u<=(sizeof(kk) - 1);u++){
		float n= count(a.begin(),a.end(),kk[u]);
		float nn  = (n/a.length()*100);
		V.push_back(make_pair(kk[u],nn));
	}
	for(all = V.begin();all != V.end();all++){
		cout<<setw(8)<<all->first<<": "<<setw(14)<<all->second<<"%"<<endl;
	}
Rodd::Polar(string x){
	x = a;
	char Polar [] = {'Q','N','H','S','T','Y','C','W'};
	char nPolar [] = {'A','I','L','M','F','V','P','G'};
}
}
class Reader{
	private:
		string x;
	public:
		Reader(string);
};
Reader::Reader(string a){
	x = a;	
	vector<pair<char,float> > bases;
	vector<pair<char,float> >::iterator all;
	char bas [] = {'A','T','G','C','U'};
	char pyr [] = {'T','U','C'};
	char pur [] = {'A','G',};
	for(int u = 0;u<=sizeof(bas) - 1;u++){
		float z = count(a.begin(),a.end(),bas[u]);
		float zz = (z/a.length())*100;
		bases.push_back(make_pair(bas[u],zz));
	}
	cout<<"-----------------\n";
	cout<<"Stats:\n";
	for(all = bases.begin();all != bases.end();all++){
		cout<<setw(11)<<all->first<<": "<<setw(12)<<all->second<<"%"<<endl;
	}
	vector<float> redd;
	vector<float>::iterator ell;
	for(int u = 0;u<=(sizeof(pyr) - 1);u++){
		float h = count(a.begin(),a.end(),pyr[u]);
		float hh = (h/a.length()) *100;
		redd.push_back(hh);
	}
	float sum = 0;	
	for(int u = 0;u<=(sizeof(pyr) - 1);u++){
		sum += redd[u];		
	}
	vector<float> ridd;
	vector<float>::iterator oll;
	for(int u = 0;u<=(sizeof(pur) - 1);u++){
		float j = count(a.begin(),a.end(),pur[u]);	
		float jj = (j/a.length()) *100;
		ridd.push_back(jj);
	}
	float sim = 0;
	for(int u = 0;u<=(sizeof(pur) - 1);u++){
		sim += ridd[u];
	}
		cout<<setw(14)<<"pur: "<<setw(11)<<sim<<"%"<<endl;
		cout<<setw(14)<<"pyr: "<<setw(11)<<sum<<"%"<<endl;
}
int main(){
	string x;
	cout<<"Enter sequence:\n";
	cin>>(x);
	Check abba;
	abba.Snatch(x);
	if(abba.Snatch(x) == "Nucleotide"){
		Reader Reader(x);		
	}
	if(abba.Snatch(x) == "Aminoacid"){
		Rodd Rodd(x);
	}

}
