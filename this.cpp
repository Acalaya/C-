#include<iostream>
#include<string>
using namespace std;
class Base{
    int a;
    public:
    //constructor
    Base(int a){
        this->a=a; //a variable in constructor is the a data member.
    }
    void display(){
        cout<<"The address of the object is"<<this<<endl;
    }
};
int main(){
    Base obj(39);
    obj.display();

    return 0;
}