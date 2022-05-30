#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

string invert (string st) {
    string st1 = "01";
    int l = st.size();
    int j, i, temp;
    //cout << st.size() << st << endl;
    for (i = 0, j = l - 1; i < j; i++, j--) {
        temp = st[i];
        //cout << st[l - 1 - i] << ends;
        st[i] = st[j];
        st[j] = temp;

    }

    for (i = 0; i < l; i++) {
        if (st[i] == st1[0]){
            st[i] = st1[1];
        } else if (st[i] == st1[1]){
            st[i] = st1[0];
        }
    }
    return st;
}

int main() {
    ifstream finp;
    int i = 0;
    string symb;
    string st[200];
    finp.open("data14_26.txt");

    while (1) {
        finp >> symb;
        st[i] = symb;
        //finp.ignore(256, '\n');
        //finp.ignore(256, '\t');
        if (finp.eof()) {
            break;
        }
        i++;
    }
    finp.close();

    ofstream outp;
    outp.open("data14_26_out");
    for (int j = 0; j < i; j++){
        outp << invert (st[j]) << " ";
    }
    outp.close();

    return 0;
}
