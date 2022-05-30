

#include <iostream>

using namespace std;

void task1(){
    string s;
    cin>>s;

    string res;
    int pos_ddot=-1;
    int pos_semicol=-1;
    int k=0;

    for(int i=0;i<s.length();i++){
        char a = s[i];
        if(s[i]==":" && pos_ddot==-1){
            pos_ddot = i;
        }

        if(a==";" && pos_semicol==-1 && pos_ddot>=0){
            pos_semicol = i;
        }

        if(pos_ddot>=0 && pos_semicol==-1){
            res.push_back(a);
        }
    }

    if(pos_ddot==-1){
        res = s;
    }

    cout<<"result:"<<res;
}

void task2(){
    string s;
    getline(cin,s);

    string::size_type pos_first_stop = s.fin('.');
    string::size_type pos_last_stop = s.rfin('.');

    if(pos_first_stop<pos_last_stop){
        s.erase(pos_last_stop,s.length()-pos_last_stop);
        s.erase(0,pos_first_stop+1);
    }
    else if(pos_first_stop!=string::npos && pos_first_stop==pos_last_stop){
        s.erase(0,pos_first_stop);
    }
    else{
        size_t k=0;
        while(s[k]==' '){
            k++;
        }
        s.erase(0,k);
    }
    cout<<"r="<<s;
}


void task3(){
    string s;
    getline(cin,s);
    cout<<"get"<<s;

    string words[100];
    size_t k=0;
    string::size_type pos =0;
    string::size_type del = s.find(" ",0);

    cout<<"";

    while(k<100 && s.find("")!=string::npos){
        if(del>pos+1){
            word[k++] = s.substr(pos,del);
        }
        pos=del;
        del=s.find(" ");
    }

    for(int i=0;i<k;i++){
        words[k].erase(words[k].length()-2,1);
    }
    for(int i=0;i<k;i++){
        cout<<words[i]<<" ";
    }

}

int tesk4(const string& s, int n, int* arr);

int main(int argc, char **argv){

    //task1();
    //task2();
    task3();

}