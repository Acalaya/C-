#include<iostream>
using namespace std;

class Student{ 
    private:
    int marks;
    public: 
    Student(int m){
        marks = m;
    }

    friend void display(Student obj);

};
 void display(Student obj){
    cout<<obj.marks<<endl;
 }


int main(){
    Student s1(79);
    display(s1);

    return 0;
}