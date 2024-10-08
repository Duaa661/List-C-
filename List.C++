#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int>p;
    p.push_back(5);
    p.push_back(7);
    p.push_back(9);
    p.push_back(10);
    p.push_front(7);
    p.pop_back();
    p.pop_front();
    cout<<"size ="<<p.size()<<" "<<endl;
    for(auto it:p){
      cout<<"it number-->"<<it<<" "<<endl;
      cout<<p.empty()<<" ";
    }
}
