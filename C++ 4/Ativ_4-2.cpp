#include <iostream>
using namespace std;
int main()
{
    int calculadora,num1, num2, result;
    
    cout << ""
    cout << "digite qual operacao voce deseja\n";
    cout << "(1) para adicao\n(2) para adicao\n(3) para multiplicacao\n(4) para divisao\ndigite qual ira deseja: ";
    cin >> calculadora;
    
    switch (calculadora) {
  case 1:
    result = num1 + num2;
    cout << "O resultado da soma e: "<< calculadora;
    break;
  case 2:
    result = num1 - num2;
    cout << "O resultado da subtracao e: "<< calculadora;
    break;
  case 3:
  result = num1 * num2;
    cout << "O resultado da multiplicacao e: "<< calculadora;
    break;
  case 4:
  result = num1 / num2;
    cout << "O resultado da divisao e: "<< calculadora;
    break;
}
    return 0;
}
