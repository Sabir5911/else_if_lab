#include <iostream>
using namespace std;
#include <fstream>

int main()
{
         ofstream file;
        int service;
        cout<<"Enter Your service " ;
        cin>>service;
        if (service>5)
        {
            int salaray;
            int amount;
            cout<<"Enter Your salaray";
            cin>>salaray;


        amount=(salaray*5/100);
            file.open("data.txt",ios::out);
            int data=amount+salaray;
            file <<"youur new bonus"<<data;

        cout<<"Your new salray is "<<amount;
            
        }
        else{
            cout<<"Less year";
        }
        
}

