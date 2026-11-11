// Fluxo de Compilação

#include <iostream>

// Protótipo da Função (Declaração)
int obterMaior(int a, int b);       // sem ela, o código geraria erro

int main() {
    int x= 15;
    int y= 20;

    // Chamada Válida: o Compilador já conhece o Protótipo
    int maior = obterMaior(x,y);

    std::cout << "O maior valor eh: " << maior << std::endl;

    return 0;
}

// Definição da Função (Implementação)
int obterMaior(int a, int b) {
    return (a > b) ? a : b;
}