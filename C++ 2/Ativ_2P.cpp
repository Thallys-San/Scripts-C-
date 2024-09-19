#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double raio, area;
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    area = M_PI * raio * raio;
    cout << "A área do círculo com raio " << raio << " é " << area << "." << endl;
    return 0;
}
