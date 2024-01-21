/*Write a program that takes a numeric input representing a day of the week (1 for Sunday, 2 for Monday, and so on) and prints the corresponding day's name. Use a switch statement for this task.*/
#include <iostream>
using namespace std;

int main(){
    int val;
    cout<<"Enter NUmber to find its week day:- ";
    cin>>val;
    cout<<endl;

    switch (val){
        case 1:{
            cout<<"Monday"<<endl;
            break;
        }

        case 2:{
            cout<<"Tuesday"<<endl;
            break;
        }

        case 3:{
            cout<<"Wednesday"<<endl;
            break;
        }

        case 4:{
            cout<<"Thursday"<<endl;
            break;
        }

        case 5:{
            cout<<"Friday"<<endl;
            break;
        }

        case 6:{
            cout<<"Saturday"<<endl;
            break;
        }

        case 7:{
            cout<<"Sunday"<<endl;
            break;
        }

    }

    return 0;
}