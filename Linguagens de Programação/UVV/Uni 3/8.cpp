// Conversões Implícitas e Coerção de Argumentos

#include <iostream>

// Protótipo
void exibirInt(int n);

int main() {
    double pi = 3.14159;

    // Coerção com Estreitamento (Narrowing | Truncamento)
    exibirInt(pi);

    return 0;
}

void exibirInt(int n) {
    std::cout << "Valor truncado: " << n <<std::endl;
}