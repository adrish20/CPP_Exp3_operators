//Adrish Purkayastha
//PRN:23070123011
//Experiment 3.c
//program to take input of marks of 5 subjects and display the grade
#include <iostream>
using namespace std;
int main(){
    float m1,m2,m3,m4,m5;
    float avg;
    cout<<"Enter marks of first subject: ";
    cin>>m1;
    cout<<"Enter marks of second subject: ";
    cin>>m2;
    cout<<"Enter marks of third subject: ";
    cin>>m3;
    cout<<"Enter marks of fourth subject: ";
    cin>>m4;
    cout<<"Enter marks of fifth subject: ";
    cin>>m5;
    avg = (m1+m2+m3+m4+m5)/5;
    if (avg>=90){
        cout<<"Grade: O";
    }
    else if (avg>=80){
        cout<<"Grade: A+";
    }
    else if (avg>=70){
        cout<<"Grade: A";
    }
    else if (avg>=60){
        cout<<"Grade: B+";
    }
    else if (avg>=40){
        cout<<"Grade: B";
    }
    else{
        cout<<"Grade: F";
    }

}
/*
Enter marks of first subject: 68
Enter marks of second subject: 96
Enter marks of third subject: 78
Enter marks of fourth subject: 86
Enter marks of fifth subject: 63
Grade: A
*/