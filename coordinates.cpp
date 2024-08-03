//Adrish Purkayastha
//PRN:23070123011
//Experiment 3.b
//Program to check the quadrant
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter Y coordinate: ";
    cin>>y;
    if (x>0 && y>0){
        cout<<"It lies in first quadrant";
    }
    else if (x<0 && y>0){
        cout<<"It lies in second quadrant";
    }
    else if (x<0 && y<0){
        cout<<"It lies in third quadrant";
    }
    else{
        cout<<"It lies in fourth quadrant";
    }



}
/*
OUTPUT:
Enter x coordinate: -2
Enter Y coordinate: 3
It lies in second quadrant
*/