#include<iostream>
#include<string>
using namespace std;

class complex{
    int i,r;
    public:
    complex(){

    }
    complex(int x, int y){
        i=y;
        r=x;
    }
    complex operator + (complex obb){ //operator overloading 
        complex temp;
        temp.i=i+obb.i;
        temp.r=r+obb.r;
        return temp;

    }
    void display(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }

};

int main(){
    complex obj(2,3);
    complex ob2(3,5);
    complex ob3;
    ob3= obj+ob2;
    ob3.display();
    return 0;
}