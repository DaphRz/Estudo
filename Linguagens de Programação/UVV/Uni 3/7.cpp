// Coerção de Argumentos (Argument Coercion)

#include <iostream>
#include <cmath>

int main() {
    int x = 4;

    // O argumento 'x' (int) sofre COERÇÃO p 'double' (4.0) ANTES da chamada
    double raiz = std::sqrt(x);

    std::cout << "Raiz: " << raiz << std::endl;
    
    return 0;
}