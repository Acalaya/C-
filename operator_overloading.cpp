#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x, int y){
        a=x;
        b=y;
    }
    void operator-(){ //operator overloading
        a=a+a;
        b=-b;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    A obj(2,3);
  //  obj.display();
    -obj; //operator overloading call
    obj.display();

    return 0;
}