/* Algorithm for file parsing */ 
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<fstream>
using namespace std;
class Reader {
    private:
    string seq;
    vector<string> con,IDs,line;     
    string file_op;
    public:
    bool Shock(string x);
    char Check(vector<string>);
    Reader(string);
    void Pro();
    void Out();
};
char Reader::Check(vector<string> x){
    con = x;
    string j = con[0];
    return j[0];
}
bool Reader::Shock(string x){
    std::string::iterator ll;
    for(ll = x.begin();ll != x.end(); ll++){
        if(x[0] == Check(con)){
            return true;
        } else {
            return false;
        }
    }
}
Reader::Reader(string x){
    file_op = x;
    string line;
    ifstream input(file_op);
    if(!input.good()){
        cerr<<"File unreadable\nEnding operation"<<endl;
        throw std::exception();
    }
    while(getline(input,line)){
        con.push_back(line);
    }
    Pro();
}
void Reader::Pro(){
    vector<string>::iterator ll;
    for(ll = con.begin();ll != con.end(); ll++){
        if(Shock(*ll)){
            IDs.push_back(*ll);
        } else {
            seq.clear();
            seq += *ll;
            line.push_back(seq);
        }
    }
    Out();
}
void Reader::Out(){
    for(int i = 0;i< IDs.size();i++){
        cout<<IDs[i]<<"\t"<<line[i]<<endl;
    }
}
int main(int argc, char** argv){
    if(argc <= 1){
        cerr<<"ERROR!\nNo File Given\n";
        return -1;
    }
    new Reader(argv[1]);
}