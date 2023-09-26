#include<iostream>
using namespace std;
#include <fstream>
int main()
{
    fstream files;
    int totalclass=100;
    int taken;
    double percentage;
    cout<<"Enter The Total classes You have Taken ";
    cin>>taken;
    percentage= (static_cast<double>(taken) / totalclass) * 100;
    
    cout<<percentage<<endl;
    if(percentage<=75){
cout<<"You are not allowed";
         files.open("data.txt",ios::out);
         files<<"your percetaage is "<<percentage<<"Which is less then 75 so you are not allowed";

    }else{
        cout<<"allowed";
    }

    return 0;
}