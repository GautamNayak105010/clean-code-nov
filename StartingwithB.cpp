#include<iostream>
using namespace std;

int main()
{
    string names[]={"Bosch","Robert","Lenovo","Bengaluru"};

    for(string name : names)
    {
        if(name[0]=='B')
        cout<<name<<endl;
    }
}
