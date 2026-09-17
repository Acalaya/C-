#include<iostream>
using namespace std;
class Parent{
    int static count;
    int x;
    public:
    Parent(){
        count++;
        x++;
    }
    static void display(){
        cout<<"Number of objects are: "<<count<<endl;
    }
};

int Parent :: count=0;
int main(){

    Parent obj1;
Parent:: display(); //even if there's no object, we can call this way
    return 0;
}
