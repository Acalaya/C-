#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int n;
    string temp;
    cout<<"Enter the number of data:";
    cin>>n;
    ofstream obj("hello.txt");
    for(int i=0;i<n;i++){
        cout<<"Enter the name:";
        cin>>temp;
        obj<<temp<<endl;
    }

    obj<<"Owner: The Acalaya";
    obj.close();
    
    ifstream obj2("hello.txt");
    string tem;
    while(getline(obj2,tem)){
        cout<<tem<<endl;
    }
    

    return 0;
}