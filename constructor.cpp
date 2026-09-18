#include<iostream>
#include<string>
using namespace std;

class Demo{
public:
Demo(){ //default constructor
    cout<<"Hello, I am constructor:";
}
Demo(int a){ //parameterized constructor
    cout<<"I am parameterized constructor:"<<a<<endl; 
}
Demo(int a, int b){  //constructor overloading
    cout<<a<<b<<endl;
}
Demo(string c){
    cout<<c<<endl;
}
};

int main(){
    Demo obj;
    Demo obj1(3);
    Demo obj2(6,9);
    Demo obj3("Acalaya");
    
    return 0;
} 