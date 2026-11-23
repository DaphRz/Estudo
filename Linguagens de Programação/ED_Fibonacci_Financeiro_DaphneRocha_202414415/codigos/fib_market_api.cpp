// CÓDIGO DA IMPLEMENTAÇÃO (BIBLIOTECA)

#define BUILDING_DLL

#include "fib_market_api.h"
#include <iostream>
#include <iomanip>
#include <cmath>

void calcularRetracoes(double baixo, double alto, int tendencia) 
{
    double amplitude = std::fabs(alto - baixo);  // valor absoluto

    // Níveis Clássicos de Fibonacci
    double n236 = 0.236;
    double n382 = 0.382;
    double n500 = 0.500;
    double n618 = 0.618;

    // essa linha configura como os números double serão exibidos no std::cout
    // ela não altera os valores das variáveis, apenas formata a saída
    std::cout << std::fixed << std::setprecision(2); // std::fixed: ativa a notação de ponto fixo

    std::cout << "--- ANÁLISE DE RETRAÇÃO FIBONACCI ---\n";
    std::cout << "Swing Low : " << baixo << "\n";
    std::cout << "Swing High: " << alto << "\n";
    std::cout << "Amplitude : " << amplitude << "\n\n";

    // Tendência de Alta -> Níveis de Suporte
    if (tendencia == 1)
    {
        std::cout << "Tendência: ALTA (procurando suportes)\n";
        std::cout << "23.6% : " << (alto - amplitude * n236) << "\n";
        std::cout << "38.2% : " << (alto - amplitude * n382) << "\n";
        std::cout << "50.0% : " << (alto - amplitude * n500) << "\n";
        std::cout << "61.8% : " << (alto - amplitude * n618) << "\n";
    }
    // Tendência de Baixa -> Níveis de Resistência
    else 
    {
        std::cout << "Tendência: BAIXA (procurando resistências)\n";
        std::cout << "23.6% : " << (baixo + amplitude * n236) << "\n";
        std::cout << "38.2% : " << (baixo + amplitude * n382) << "\n";
        std::cout << "50.0% : " << (baixo + amplitude * n500) << "\n";
        std::cout << "61.8% : " << (baixo + amplitude * n618) << "\n";
    }

    std::cout << "--------------------------------------\n";
 }