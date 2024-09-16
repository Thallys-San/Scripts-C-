#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    
    if (!palavra.empty()) {
        cout << "A palavra não é vazia";
    }
    
    return 0;
}
