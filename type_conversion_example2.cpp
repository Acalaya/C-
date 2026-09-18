//conversion of polar co-ordinates to rectangular co-ordinates
#include<iostream>
#include<string>
#include<cmath> //cos sin
using namespace std;

class Polar{
    public:
    float r, thita;
    Polar(){

    }
    Polar(float ra,float th){
        r=ra;
        thita=th;
    }
};

class Rectangle{
    float x,y;
    public:
    Rectangle(){

    }
    Rectangle(Polar p){
        x=p.r*cos(p.thita);
        y=p.r*sin(p.thita);
    }
    void display(){
        cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    }

};


int main(){
    Polar p1(2,3);
    Rectangle r1;
    r1=p1;
    r1.display();

    return 0;
}