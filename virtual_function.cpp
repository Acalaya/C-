#include<iostream>
#include<string>
using namespace std;
//Run-time polymorphism 
class Animal{ //called Abstract class when at least one pure virtual class consists. 
    public:
    //virtual void sound()=0; //pure virtual function 
    virtual void sound(){ //virtual function
        cout<<"Animal makes a sound."<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"Dog barks."<<endl;
    }
};
class Cat:public Animal{
    public:
    void sound(){
        cout<<"Cat meows"<<endl;
    }
};
int main(){
    Animal* ptr;
    Dog obj1;
    Cat obj2;
    ptr = &obj1;
    ptr->sound();
    ptr = &obj2;
    ptr->sound();
    return 0;
}