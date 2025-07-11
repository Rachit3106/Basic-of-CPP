/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
int main(){
    float num1,num2,sub,div;
    cout<<"Type number 1:";
    cin >> num1;
    cout << "Type number 2:";
    cin >> num2;
    cout << "Addition:" << num1+num2 << endl;
    if(num1>num2){
        cout << "Subtraction:" << num1-num2 << endl;
    }
    else{
        cout << "Subtraction:" << num2-num1 << endl;
    }
    cout << "Multiplication:" << num1*num2 << endl;
    if(num2!=0){
        cout << "Division:" << num1/num2 << endl;
    }
    else{
        cout << "Division:" << num2/num1 << endl;
    }
}
/*
Type number 1:10
Type number 2:20
Addition:30
Subtraction:10
Multiplication:200
Division:0.5
*/