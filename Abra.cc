/* 
PROGRAM: ABRACADABRA AMINOACID ANALYSER 
VERSION: 0.01
AUTHOR: THIALISSON CAACI
INSTITUTION: FEDERAL UNIVERSITY OF PERNAMBUCO
DATE: 2018
*/
#include<iostream> // Standard library declared
#include<string> // String library declared
#include<algorithm> // Algorithm library declared
#include<vector> // Vector library declared
#include<utility> // Utility library declared
#include<fstream> // File manipulation stream declared
#include<stdio.h> // C library for string manipulation
#include<memory> // Memory manipulation library
#include<limits> // limiting library
using namespace std; // Standard namespace declared
class Reader { // Reader class declared
    protected: // Protected scope declared
    float Size(vector<string> x){ // Size function declared
        vector<string>::iterator ll; // Vector iterator declared
        float a; // dummy counter declared
        for(ll = x.begin(); ll != x.end(); ll++){ // Beggining of counting loop
            a++; // Incrementing dummy variable
        } // End of counting loop
        return a; // Return the dummy's value
    } // End of size function
    float size; // variable size declared
    vector<pair<string,string> > All; // Vector of pairs declared
    string seq; // Sequence variable declared
    vector<string> con,IDs,line; // String Vector declared
    string file_op; // File name variable declared
    public: // Public Scope declared
    bool Shock(string x); // Shock boolean function
    char Check(vector<string>); // Check function declared
    Reader(string); // Reader's constructor declared
    void Pro(); // Pro void function declared
    void Out(); // Out void function declared
}; // End of Reader class
char Reader::Check(vector<string> x){ // Check function declared
    con = x; // connecting contents vector with function argument
    string j = con[0]; // Catching the first element present in the file
    return j[0]; // Returning the Character that will used to parse the document
} // End of Check function
bool Reader::Shock(string x){ // Shock function declared
    std::string::iterator ll; // String iterator declared
    for(ll = x.begin();ll != x.end(); ll++){ // Iteration started
        if(x[0] == Check(con)){ // Connecting with Check function
            return true; // Value returned by the function
        } else { // Other logical condition
            return false; // Value returned by the function
        } // End of logical chain
    } // End of iteration
} // End of Shock function
Reader::Reader(string x){ // Reader class's Constructor declared
    file_op = x; // Catching the file name
    string line; // Variable representing each line of the file
    ifstream input(file_op); // Start of input stream
    if(!input.good()){ // Catching error and throwing exception
        cerr<<"File unreadable\nEnding operation"<<endl; // Use of error output handle
        throw std::exception(); // Throwing exception
    } // error catching logical handle
    while(getline(input,line)){ // Reading loop 
        con.push_back(line); // Adding lines to the end of the contents vector
    } // End of Reading loop
    Pro(); // Calling the processing function
} // End of Reader's constructor
void Reader::Pro(){ // Processing function declared
    vector<string>::iterator ll; // Vector of strings iterator declared 
    for(ll = con.begin();ll != con.end(); ll++){ // Beginning of logical iteration
        if(Shock(*ll)){ // Check if first letter equals the one given by the shock function
            IDs.push_back(*ll); // Add to the end of the identifications vector
        } else { // In case of failure
            seq.clear(); // Clear content of the sequence string
            seq += *ll; // Sequence string equals the concatenation of the strings that do not equal the Shock function
            line.push_back(seq); // Add the sequence string to the line vector
        } // End of logical chain
    } // End of iteration
    for(int i = 0;i<= Size(IDs) - 1;i++){ // Beginning of pair construction loop
        All.push_back(make_pair(IDs[i],line[i])); // Making use of utility function to develop vector of pairs
    } // End of Construction loop
    Out(); // Calling Output function
} // End of Reader's Processing function
void Reader::Out(){ // Reader's output function declared
   /* vector<pair<string,string> >::iterator ll; // Vector of pairs iterator declared
    for(ll = All.begin();ll != All.end(); *ll++){ // Start of output iteration
        cout<<ll->first<<"\t"<<ll->second<<endl; // Output
    }*/ // End of loop
} // End of Reader's Output function
/* From this point on, The sequence file will be tested and analysed with The Wizard algorithm */
class A_bot : public Reader { // Class Automatic bot declared
    protected: // Protected scope declared
    vector<string> Heads; // vector of the sequence IDs 
    vector<string> Arms; // Vector Containing the Sequences for analysis
    /* BEGINNING OF THE VARIABLES THAT COMPUTE THE RELATIVE NUMBER OF AMINOACIDS CLASSES PRESENT IN THE
    SEQUENCES */
    /* END OF VARIABLE DECLARATION */
    /* START OF VECTORS CONTAINING THE SINGLE LETTER IDENTIFICATION OF AMINOACIDS */
    /* END OF VECTORS CONTAINING THE SINGLE LETTER IDENTIFICATION OF AMINOACIDS */
    public: // Public Scope declared
    A_bot(string x); // Automatic bot constructor declared
    void Pro(); // Processing declared 
    void Out(); // Output function declared
    void Troll(string); // Troll function
    float C_apo(string); // Check for apolar function
    float C_pol(string); // Check for polar function
    float C_keto(string); // Check for ketogenic function
    float C_gluco(string); // Check for glucogenic function declared
    float C_amfi(string); // Check for amfigenic function declared
    float C_charged(string); // Check for Charged function declared
}; // End of Automatic bot class
float A_bot::C_apo(string x){ // Check apolar function declared
    float cc = 0; // Counter declared
    float size = x.length();
    vector<char> apo = {'A','I','L','M','F','V','P','G'}; // Vector of apolar aminoacids El = 7
    std::string::iterator ll; // Dummy iterator declared
    for(ll = x.begin(); ll != x.end(); ll++){ // Beginning of L.I.
        if(*ll == apo[0] || // Logical Chain for Apolar aminoacids;
        *ll == apo[1] || // *
        *ll == apo[2] || // *
        *ll == apo[3] || // *
        *ll == apo[4] || // *
        *ll == apo[5] || // *
        *ll == apo[6] || // *
        *ll == apo[7]){ // *
            cc++; // Incrementing protected counter
        } // End of iteration for Apolar aminoacids
    } //
    float lero = (cc/size)*100; // Allocation of variable
    return lero; // Return percentual value
} // End of Check for apolar function
float A_bot::C_pol(string x){ // Beginning of Check for polar function
    std::string::iterator ll; // Declaration of string iterator
    float cc = 0; // Declaration of counter
    float size = x.length(); // Catching size of sequence
    vector<char> po =  {'Q','N','H','S','T','Y','C','W'}; // Vector of polar aminoacids El = 7
    for(ll = x.begin(); ll != x.end(); ll++){
        if(*ll == po[0] || // Beginning of L.I. for polar aminoacids
         *ll == po[1] || // *
         *ll == po[2] || // *
         *ll == po[3] || // *
         *ll == po[4] || // *
         *ll == po[5] || // *
         *ll == po[6] || // *
         *ll == po[7]){ // *
             cc++; // Incrementing protected polar aminoacids
        } // End of iteration for Polar aminoacids
    } // End of general L.I. 
    float lorn = (cc/size)*100; // Catching percentage value
    return lorn; // Returning intended value
} // End of Check for polar function
float A_bot::C_keto(string x){ // Beginning of Check for ketogenic functions
    std::string::iterator ll;
    float cc = 0;
    float size = x.length();
    vector<char> ket = {'L','K'}; // Vector of ketogenic aminoacids El = 1
    for(ll = x.begin(); ll != x.end();ll++){
        if(*ll == ket[0] || // Beginning of iteration for ketogenic aminoacids
        *ll == ket[1]){ // *
            cc++; // Incrementing protected ketogenic counter
        } // End of logical iteration for ketogenic aminoacids
        float zun = (cc/size)*100; // Catching percentage value
        return zun;
    } // End of General L.I.
    } // End of Check for ketogenic function
float A_bot::C_amfi(string x){ // Beginning of Check for amfigenic function
    std::string::iterator ll;
    float size = x.length();
    float cc = 0;
    vector<char> am = {'I','F','T','W','Y'}; // Vector of amfigenic aminoacids El = 4
    for(ll = x.begin(); ll != x.end(); ll++){
        if(*ll == am[0] || // Beginning of L.I. for Amfigenic aminoacids
        *ll == am[1] || // *
        *ll == am[2] || // *
        *ll == am[3] || // *
        *ll == am[4]){ // *
            cc++; // Incrementing the amfigenic protected counter
        } // End of iteration for Amfigenic aminoacids
    } // End of L.I.
    float greed = (cc/size)*100;
    return greed;
} // End of Check for amfigenic function
float A_bot::C_gluco(string x){ // Beginning of Check for glucogenic function
    std::string::iterator ll;
    float cc = 0;
    float size = x.length();
    vector<char> gluc = {'A','R','N','D','C','E','Q','Z','G','H','M','P','S','V'}; // Vector of glucogenic aminoacids El = 13
    for(ll = x.begin(); ll != x.end(); ll++){
        if(*ll == gluc[0] || // Beginning of iteration for Glucogenic aminoacids
        *ll == gluc[1] || // *
        *ll == gluc[2] || // *
        *ll == gluc[3] || // *
        *ll == gluc[4] || // *
        *ll == gluc[5] || // *
        *ll == gluc[6] || // *
        *ll == gluc[7] || // *
        *ll == gluc[8] || // *
        *ll == gluc[9] || // *
        *ll == gluc[10] || // * 
        *ll == gluc[11] || // *
        *ll == gluc[12] || // *
        *ll == gluc[13]) { // *
            cc++; // Incrementing protected glucogenic variable
        } // End of iteration for Glucogenic aminoacids
    } // End of L.I.
    float zarbon = (cc/size)*100; // Catching percentage value
    return zarbon;
} // End of check for Glucogenic function
float A_bot::C_charged(string x){ // Beginning of Check for charged function
    std::string::iterator ll; // Declaration of string iterator
    float cc = 0; // Declaration of dummy counter
    float size = x.length(); // Catching size of sequence
    vector<char> charged = {'R','K','D','E'}; // Vector of charged aminoacids El = 3
    for(ll = x.begin(); ll != x.end();ll++){
        if(*ll == charged[0] || // Beginning of L.I for Charged aminoacids
        *ll == charged[1] || // *
        *ll == charged[2] || // *
        *ll == charged[3]){ // *
            cc++; // Incrementing protected sayian variable
        } // End of iteration for Charged aminoacids
    } // End of General L.I.
    float tybh = (cc/size)*100; // Catching percentage value
    return tybh; // Returning intended value
    } // End of Check for charged function
A_bot::A_bot(string x) : Reader(x){ // Non standard Constructors declared
    cout<<"The bot is moving"<<endl; // Signal that the class has started
    vector<pair<string,string> >::iterator ll; // Iterator for vector of pairs declared
    for(ll = All.begin(); ll != All.end();ll++){ // Beginning of constructive loop
        Arms.push_back(ll->second); // Catching the second column of the vector of pairs
    } // End of constructive loop
    Pro(); // Call for processing function
} // End of Automatic bot constructor
void A_bot::Pro(){ // Beginning of processing function
    vector<pair<string,string> >::iterator kll; // Vector of pairs iterator declared
    for(kll = All.begin(); kll != All.end(); kll++){ // L.I. iteration stated
        Heads.push_back(kll->first); // Adding the IDs to the Heads vector
    } // End of general L.I.
    Out(); // Call for output function
} // End of processing function
void A_bot::Out(){ // Beginning of output function
    int i = -1; // Dummy variable declared
    vector<string>::iterator yy; // Vector of strings iterator declared
    cout<<"Identification\t"<<"Apolar(%)\t"<<"Polar(%)\t"<<"Ketogenic(%)\t"<<"Glucogenic(%)\t"<<"Amfigenic(%)\t"<<"Charged(%)\t"<<endl;
    for(yy = Arms.begin(); yy != Arms.end(); yy++){ // Beginning of logical iteration
        i++; // Incrementing dummy counter i
        cout<< Heads[i] /*iDs*/<<"\t"<<C_apo(*yy)/*1*/<<"\t"<<C_pol(*yy)/*2*/
        <<"\t"<<C_keto(*yy)/*3*/<<"\t"<<C_gluco(*yy)/*4*/<<"\t"<<C_amfi(*yy)/*5*/<<"\t"<<C_charged(*yy)<<endl;/*6*/; // Output
    } // End of General L.I.
} // End of output function
int main(int argc, char** argv){ // Main function declared
    new A_bot(argv[1]); // Declaring new instance of Automatic bot class || Passing the argv[1] argument
return 0; // Value returned by the Main function
} // End of Main function