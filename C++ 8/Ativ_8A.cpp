#include <iostream>
using namespace std;

int main(){
    int vetor[5] = {10, 20, 30, 40, 50};
    cout << "Elementos do vetor:" << std::endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << vetor[i];
    }

    return 0;
}

