#include <iostream>

#include <queue>
#include <list>
#include <iterator>

#include <algorithm>

using namespace std;

void task1(){
    int n;
    cout<<"Number of customers:";
    cin>>n;
    
    queue<int> t;
    int time;
    for(int i=0;i<n;++i){
        cout<<"Time of "<<i<<"-th customer:";
        cin>>time;
        t.push(time);
    }
    
    queue<int> c;
    int sum_time =0;
    int k=0;
    while(!t.empty()){
        int tmp = t.front();
        t.pop();
        sum_time += tmp;
        int t2 = sum_time> k?(sum_time - k):0;
        c.push(t2);
        k++;
    }
    int i=0;
    while(!c.empty()){
        cout<<"Customer "<<i<<" waited "<<c.front()<<";\n";
        c.pop();
        i++;
    }
    
}





template <typename T>
class Poly{
    size_t n;
    list<T> a; //[] is not
public:
    Poly(){n=0;}
    Poly(int m):n(m){
        a.assign(m,0);
    }
    Poly(size_t m, T* arr):n(m){
        for(size_t i=0;i<n;i++){
            a.push_back(arr[i]);
        }
    }
    
    int input(){
        cout<<"n=";
        cin>>n;
        for(size_t i=0;i<n;i++){
            cout<<"a["<<i<<"]=";
            T x;
            cin>>x;
            a.push_back(x);
        }
        return n;
    }
    
    void output();
    
    Poly add(const Poly& x);
    
    Poly mult(const Poly& x);
    
};

template <class T>
void Poly<T>::output()
{
    size_t i=0;
    for(auto& x: a){
        cout<<x<<"*x^"<<i;
        
        i++;
        if(i<n)
            cout<<" + ";
    }
    cout<<"\n";
} 

template <class T>
Poly<T> Poly<T>::add(const Poly<T>& x)
{
      list<T> d;
      auto p1 = a.cbegin();
      auto p2 = x.a.cbegin();
      while(p1!=a.cend() && p2!=x.a.cend()){
          T c = *p1 + *p2;
          d.push_back(c);
          p1++;
          p2++;
      }  
      
      while(p1!=a.cend()){
          d.push_back(*p1);
          p1++;
        }
      while(p2!=x.a.cend()){
          d.push_back(*p2);
          p2++;
        }
        
        Poly r;
        r.n = max(n,x.n);
        r.a = d;
        return r;
}


template <class T>
Poly<T> Poly<T>::mult(const Poly<T>& x){
    
    typename list<T>::const_iterator this_iter = a.cbegin();
    typename list<T>::const_iterator x_iter = x.a.cbegin();
    
    int i=0,j=0;
    
    list<T> d;
    d.assign((x.n-1) +(n-1)+1, 0);
    
    typename list<T>::iterator d_iter = d.begin();

    
    while(this_iter != a.cend()){
         while(x_iter != x.a.cend()){
                T val = *this_iter * *x_iter;
                T val1 = *d_iter;
                *d_iter = val1 + val;   // c[i+j] += a[i]*a[j] 
                x_iter++;
                d_iter++;
         }
        this_iter++;
        //TODO: fix this
        
        //d_iter -=x.n;
        //advance(d_iter,-x.n+1);
        d_iter = d.begin();
        i++;
        next(d_iter,i);
    }
    
    Poly<T> res;
    res.n = n *x.n;
    res.a = d;
    return res;    
}


void task2(){

   Poly<int> x1;
   int ar[]={1,2,3};
   Poly<int> x2(3,ar);
   
   x1.input();
   x1.output();
   x2.output();
   
   Poly<int> x3 = x1.add(x2);
   x3.output();
   
   Poly<int> x4 = x1.mult(x2);
   x4.output();
   
}


template <class T>
std::vector<std::list<T> > inputMatrix(int n, int m){
    std::vector<std::list<T> > matr;
    T tmp;
    for(int i=0;i<n;i++){
        std::list<T> row;
        for(int j=0;j<m;j++){
            std::cout<<"m["<<i<<","<<j<<"]=";
            std::cin>>tmp;
            row.push_back(tmp);
        }
        matr.push_back(row);
    }
    return matr;
} 

int maxRow(const std::list<int>& r){
    return *max_element(r.begin(),r.end());
}

template <class T>
class FunctorRowCmp{
public:
    bool operator() (const list<T>& r1, const list<T>& r2){
        return *max_element(r1.begin(),r1.end()) > *max_element(r2.begin(),r2.end());
    }
};

template <class T>
int sortRows(std::vector<std::list<T> >& matr){
    
    std::sort(matr.begin(), matr.end(),
            FunctorRowCmp<T>()
            );
    return 0;
}

template <class T>
void outputMatrix(const std::vector<std::list<T> >& matr){
    for(auto& row: matr){
        for(auto& el: row){
            cout<<el<<"\t";
        }
        cout<<"\n";
    }
}

void task3(){
    int n,m;
    cout<<"n,m:";
    cin>>n>>m;
    
    vector<list<double> > matr;
    
    matr = inputMatrix<double>(n,m);
    sortRows(matr);
    outputMatrix(matr);
}

int main(int argc, char **argv)
{
    
    //task1();
	//task2();
    
    task3();
    
    
  fstream f("text.txt");
  string word;
  
  map<string,int> freq_dict;
  
  while(f>>word){
      
      if(freq_dict.find(word)!=freq_dict.end()){
          freq_dict[word]++;
      }
      else{
           freq_dict[word] = 1;
      }
  }
  
  f.close();
  
  map<string,int>::const_iterator it = freq_dict.begin();
  for( ;it!= freq_dict.end();++it){
      cout<<it->first<<": "<<it->second<<"\n";
  }


  fstream f("points.txt");
  string word;
  
  set<pair<int,int>, cmp > pts;
  
  while(f>>word){
           // cout<<word<<":";

      string::size_type pos1 = word.find("(");
      string::size_type pos2 = word.find(",");
      string::size_type pos3 = word.find(")");
      string buf = word.substr(pos1+1,pos2);
      string buf2= word.substr(pos2+1,pos3-1);
      int x1,y1;
    //cout<<buf<<","<<buf2<<",";

      istringstream ( buf ) >> x1;
      istringstream ( buf2 ) >> y1;
      pts.insert(make_pair(x1,y1));
      //cout<<x1<<",\n";
  }
  f.close();
  
  fstream g("points2.txt",ios::out);
  
  for(auto it= pts.cbegin();it!=pts.cend();++it){
      g<<"("<< it->first<<","<<it->second<<") ";
  }
  g.close();
  
}
