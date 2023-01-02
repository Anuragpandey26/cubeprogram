#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"enter the operator ";
    cin>>op;
    cout<<"the operand ";
    cin>>num1;
    cin>>num2;

    switch (op){
        cout <<num1+num2;
        break;
        case '-':
        cout <<num1-num2;
        break;
        case  '/':
        cout <<num1 /num2;
        break;
        case '*':
        cout<<num1*num2;
        break;

        default:
        cout<<"error";
        

    }
    return 0;
}
