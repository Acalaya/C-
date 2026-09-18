#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"I am base. "<<endl;
    }
};
//using virtual base class
class Child1:virtual public Base{

};
class Child2:virtual public Base{

};
class Child3:public Child1,public Child2{

};
//Ambiguity in hybrid inheritance + also called diamond problem
int main(){
    Child3 c1;
    c1.display();
}
/*int main(){
    Child1 c1;
    Child3 c3;
    c1.display();
    c3.Child1::display();
    c3.Child2::display();

    return 0;
} */