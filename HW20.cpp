#include<iostream>
#include<fstream>
#include<sstream>
#define N 20
using namespace std;

class Word{

private:
    string root;
    string suffix;
    string ending;

public:

    Word():Word("","",""){}

    Word(string _root,string _suffix,string _ending):
        root(_root), suffix(_suffix),ending(_ending){}

    //string get_prefix(){return prefix;}
    string get_root(){return root;}
    string get_suffix(){return suffix;}
    string get_ending(){return ending;}

    virtual void print(ostream& out=cout){
        out<<root<<suffix<<ending<<ends;
    }

    Word change_ending(string new_ending){
        Word w(root,suffix,new_ending);
        return w;
    }

    Word change_suffix(string new_suffix){
        Word w(root,new_suffix,ending);
        return w;
    }

    Word change_genus(string new_suffix,string new_ending){
        Word w(get_root(),get_suffix(),get_ending());
        Word w1=w.change_suffix(new_suffix);
        Word w2=w1.change_ending(new_ending);
        return w2;
    }
    virtual Word change_genus_to_m(string new_suffix="",string new_ending=""){
        return change_genus(new_suffix,new_ending);
    }
    virtual Word change_genus_to_w(string new_suffix="",string new_ending=""){
        return change_genus(new_suffix,new_ending);
    }
    virtual Word change_genus_to_n(string new_suffix="",string new_ending=""){
        return change_genus(new_suffix,new_ending);
    }
    virtual Word change_genus_to_plular(string new_suffix="",string new_ending=""){
        return change_genus(new_suffix,new_ending);
    }


    virtual Word vidminok_r(string new_ending=""){
        return change_ending(new_ending);
    }
    virtual Word vidminok_d(string new_ending=""){
        return change_ending(new_ending);
    }
    virtual Word vidminok_th(string new_ending=""){
        return change_ending(new_ending);
    }
    virtual Word vidminok_o(string new_ending=""){
        return change_ending(new_ending);
    }
    virtual Word vidminok_m(string new_ending=""){
        return change_ending(new_ending);
    }

};

class Verb:public Word{

public:

    Verb(string _root,string _suffix,string _ending):
        Word (_root,_suffix,_ending){}

    virtual Word change_genus_to_m(string new_suffix="в",string new_ending=""){
        return Word::change_genus_to_m("в","");
    }
    virtual Word change_genus_to_w(string new_suffix="л",string new_ending="а"){
        return Word::change_genus_to_w("л","а");
    }
    virtual Word change_genus_to_n(string new_suffix="л",string new_ending="о"){
        return Word::change_genus_to_n("л","о");
    }
    virtual Word change_genus_to_plular(string new_suffix="л",string new_ending="и"){
        return Word::change_genus_to_plular("л","и");
    }
};

class Adjective: public Word{

public:

    Adjective(string _root,string _suffix,string _ending):
        Word (_root,_suffix,_ending){}

    virtual Word change_genus_to_m(string new_suffix="",string new_ending="ий"){
        return Word::change_genus_to_m("","ий");
    }
    virtual Word change_genus_to_w(string new_suffix="",string new_ending="а"){
        return Word::change_genus_to_w("","а");
    }
    virtual Word change_genus_to_n(string new_suffix="",string new_ending="е"){
        return Word::change_genus_to_n("","е");
    }
    virtual Word change_genus_to_plular(string new_suffix="",string new_ending="і"){
        return Word::change_genus_to_plular("","i");
    }

    virtual Word vidminok_r(string new_ending="ого"){
        return Word::vidminok_r("ого");
    }
    virtual Word vidminok_d(string new_ending="ому"){
        return Word::vidminok_r("ому");
    }
    virtual Word vidminok_th(string new_ending="ого"){
        return Word::vidminok_th("ого");
    }
    virtual Word vidminok_o(string new_ending="им"){
        return Word::vidminok_r("им");
    }
    virtual Word vidminok_m(string new_ending="ому"){
        return Word::vidminok_m("ому");
    }
};

class Noun: public Word{ //відмінювання

public:

    Noun(string _root,string _suffix,string _ending):
        Word (_root,_suffix,_ending){}

    virtual Word change_genus_to_plular(string new_suffix="",string new_ending="и"){
        return Word::change_genus_to_plular("","и");
    }

    virtual Word vidminok_r(string new_ending="и"){
        return Word::vidminok_r("и");
    }
    virtual Word vidminok_d(string new_ending="у"){
        return Word::vidminok_r("у");
    }
    virtual Word vidminok_th(string new_ending=""){
        return Word::vidminok_th("");
    }
    virtual Word vidminok_o(string new_ending="ом"){
        return Word::vidminok_r("ом");
    }
    virtual Word vidminok_m(string new_ending="і"){
        return Word::vidminok_m("i");
    }
};
int main(){

    setlocale(LC_ALL, "Ukrainian");

    int n=3;
    Word* arr[N]={
        new Verb("гуля","я","в"),
        new Adjective("чудов","","ий"),
        new Noun("собак","","а")
    };
    for (int i = 0; i < n; i++){
        (arr[i]->change_genus_to_plular()).print();
        //arr[i];
    }
    cout<<endl<<endl<<"Rod:"<<endl;
    for (int i = 0; i < n-1; i++){
        (arr[i]->change_genus_to_w()).print();
        (arr[i]->change_genus_to_n()).print();
        cout<<endl;
        //;
    }
    cout<<endl<<endl;
    for (int i = 1; i < n; i++){
        (arr[i]->vidminok_r()).print();
        (arr[i]->vidminok_d()).print();
        (arr[i]->vidminok_th()).print();
        (arr[i]->vidminok_o()).print();
        (arr[i]->vidminok_m()).print();
        cout<<endl;
    }
}
