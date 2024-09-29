// JAI SHREE RAM

#include<iostream>
#include <cmath> 
using namespace std;

double calculator(double num1, double num2, string operation){
    if(operation == "+"){
        return num1 + num2;
    }else if(operation == "-"){
        return num1 - num2;
    }else if(operation == "*"){
        return num1 * num2;
    }else if(operation == "/"){
        if(num2 != 0){
            return num1 / num2;
        }else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }else if(operation == "%"){
        if(num2 != 0){
            return fmod(num1, num2); ;
        } else {
            cout << "Error: Modulus by zero is not allowed." << endl;
            return 0; 
        }
    }
}

int main(){
    double n , m;
    cout << "Enter the numbers:" << endl;
    cin >> n >> m;
    cout <<"Enter the operation (+, -, *, /, %):" << endl;
    string op;
    cin >> op;

    double res = calculator(n, m ,op);

    cout <<"The result of " << n << " and " << m << " with operation '" << op << "' is: "  << res;

    return 0;
}