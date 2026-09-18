#include<iostream>
#include<string>
using namespace std;

class Base1{
    public:
    void display(){
        cout<<"I am base 1"<<endl;
    }
};
class Base2{
    public:
    void display(){
        cout<<"I am base 2"<<endl;
    }
};
class Child:public Base1,public Base2{


};
//solving ambiguity in multiple inheritance
int main(){
    Child c1;
    c1.Base1::display();
    c1.Base2::display();
    return 0;
}