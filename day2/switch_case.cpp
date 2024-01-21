#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter number :-";
    cin>>a;

    switch (a%2){
        
        case 0:{
            cout<<"Value is even"<<endl;
            break;
        }

        default:{
            cout<<"value is odd"<<endl;
            break;
        }
    }
    return 0;
}
