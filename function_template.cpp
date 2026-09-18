#include<iostream>
#include<string>
using namespace std;
template<class A,class B> //template
//function template
void display(A n, B m){
    cout<<n<<m<<endl;
}
//class template
template<class A,class B>
class Student{
    A num;
    B name;
    public:
    Student(A a, B b){
        num = a;
        name = b;
    }
    void show(){
        cout<<num<<name<<endl;
    }
};
int main(){
    Student s1("1. ","Baby");
    Student s2(2. ,"Darling");
    s1.show();
    s2.show();

    display("Acalaya = no.",1);
    return 0;
}