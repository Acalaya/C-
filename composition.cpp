#include<iostream>
#include<string>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"I am base"<<endl;
    }
};
class Child{
    Base c;
    public:
    void display(){
        c.display();
        cout<<"It's child"<<endl;
    }

};

int main(){
    Child c1;
    c1.display();

    return 0;
}