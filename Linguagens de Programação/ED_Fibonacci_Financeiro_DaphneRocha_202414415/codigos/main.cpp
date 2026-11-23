// CÓDIGO DO PROGRAMA CLIENTE

#include <iostream>
#include "fib_market_api.h"

int main()
{
    // Dados de Mercado Simulados (Movimento de Alta)
    double precoBaixo = 20.;  // Swing Low
    double precoAlto  = 30.;  // Swing High
    int    tendencia  = 1;

    std::cout << "\nIniciando Predição de Mercado via API Fibonacci...\n\n";

    // Chamada de Função exportada pela Biblioteca Compartilhada
    calcularRetracoes(precoBaixo, precoAlto, tendencia);

    return 0;
}