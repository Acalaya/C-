#include<iostream>
#include<string>
using namespace std;
class Base{
public:
void display(){
    cout<<"Hi Baby"<<endl;
}
};

int main(){
    Base* ptr;
    //ptr->display(); //It does works too but in case -> symbol feels like a trouble. 
    (*ptr).display();
    return 0;
}