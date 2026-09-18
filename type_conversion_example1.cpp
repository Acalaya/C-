//Converting the basic to userdefined class type meter into cm
#include<iostream>
#include<string>
using namespace std;

class length{
    float cm;
    public:
    length(){

    }
    length(int m){
        cm = m*100;
    }
    void display(){
        cout<<"I am cm ="<<cm<<endl;
    }
};


int main(){
    int meter = 5;
    length L;
    L = meter;
    L.display();

    return 0;
}