#include<iostream>
#include<string>
using namespace std;

void display(float a ){

    int b = 45;
    int c = 0;
    try{
        if(a==0){
            throw string("Hi darling");
        }
        if(a==1){
            throw 3.5f;
        }
        c = b/a;
        cout<<c<<endl;
    }
    catch(string n){
        cout<<"Cannot divide by 0"<<n<<endl;
    }
    catch(float m){
        cout<<"I am a float"<<endl;
    }
}

int main(){
    display(10);
    display(0);
    display(1);

    return 0;
}