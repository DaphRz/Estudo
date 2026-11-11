// Quadrado de um Inteiro

#include <iostream>

// Definição da Função
int calcularQuadrado(int n) {
    return n * n;
}

int main() {
    int valor = 5;
    int resultado = calcularQuadrado(valor);  // Invocação da Função

    std::cout << "O quadrado de " 
              << valor
              << " eh: "
              << resultado
              << std::endl;

    return 0;
}