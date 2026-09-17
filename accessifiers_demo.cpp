#include<iostream>
using namespace std;

class Demo {

private: int x = 10; //private
protected: int y = 20; //protected
public: int z = 30; //public


};
class Child : public Demo {
public: 
    void show(){
        cout<<"Protected:"<<y<<endl;
        cout<<"Public:"<<z<<endl;

    }

};

int main(){
    Demo d;
    cout<<"Public:"<<d.z<<endl;
    Child c;
    c.show();

    return 0;
}

