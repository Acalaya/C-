#include<iostream>
using namespace std;

class Demo{
public:
int num;

Demo(int a){
    num = a;
}
Demo(Demo &obj){
    num = obj.num;


}
void display(){
    cout<<num<<endl;
}
};


int main(){
    Demo obj(3);
    obj.display();
    Demo obj2(obj);
    obj2.display();

    return 0;
}