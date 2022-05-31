#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
using namespace std;


int main(){
    vector<string> arr;
    string s = "one two three four ";
    string delim(" ");
    size_t prev = 0;
    size_t next;
    size_t delta = delim.length();
    int counter = 0;
    string el = "f";

    while( ( next = s.find( delim, prev ) ) != string::npos ){
        string tmp = s.substr( prev, next-prev );
        if (tmp.find(el) != std::string::npos) {
            counter +=1;
        }
        arr.push_back( s.substr( prev, next-prev ) );
        prev = next + delta;
    }
    cout << "Res : " << counter << endl;
    return 0;
}