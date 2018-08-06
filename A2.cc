#include<iostream>
#include<string>
#include<vector>
#include<cmath> 
#include<utility> 
#include<algorithm>
#include<fstream>
#include<stdio.h> 
using namespace std; 
class s_one{ 
    protected:
    std::string line;
    vector<std::string> total;
    vector<std::string> ID; 
    vector<std::string> pll;
    vector<char> pony;
    public: 
    s_one(); 
    bool Handler(std::string);
    std::string Rell(); 
    void Out();
    string Ram(vector<string>);
};
bool s_one::Handler(std::string x){
    std::string::iterator ll;
    for(ll = x.begin();ll !=x.end();ll++){
        if(*ll == '>'){
            return true;
        } else {
            return false;
        }
    }
}
s_one::s_one(){
    ifstream file;
    std::string line;
    std::string x = __argv[1];
    file.open(x);
    if(file.is_open()){
        while(getline(file,line)){
            total.push_back(line);
        }
    }
    Rell();
}
std::string s_one::Rell(){
    vector<std::string>::iterator kk;
    vector<char>::iterator oo;
    for(kk = total.begin();kk != total.end();kk++){
        if(Handler(*kk)){
            ID.push_back(*kk);
        }else {
            pll.push_back(*kk);
        }
    }
    Out();
}
string s_one::Ram(vector<string> jj){
    vector<string>::iterator ll;
    vector<char> barry;
    for(int i = 0;i < jj.size();i++){
        for(int j = 0; j< jj[i].size();j++){
            barry.push_back(jj[i][j]);
        }
    }
    string g(barry.begin(),barry.end());
    return g;
}
void s_one::Out(){
    vector<std::string>::iterator mm;
    for(mm = total.begin(); mm != total.end();mm++){
        cout<<*mm<<endl;
    }
    cout<<total[0]<<"\t"<<Ram(pll)<<"\n";
}
int main(int argc[],char *argv[]){
    new s_one();
}