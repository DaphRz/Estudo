// Análise Comparativa Multi-Variável e Retorno via (std::optionalcle)

#include <iostream>
#include <algorithm> // Necessário para std::max e std::min
// #include <optional>

struct AnaliseValores {
    double menor;
    double intermediario;
    double maior;
    bool iguais;
};

// Analisa e ordena 3 valores numéricos
AnaliseValores analisar3(double a, double b, double c) {

    if (a == b && b == c){
        return {a, b, c, true};
    }

    double menor = std::min({a,b,c});
    double maior = std::max({a,b,c});

    // O Valor Intermediário é obtido calculando a soma total e subtraindo os extremos
    double intermediario = (a+b+c) - (menor +  maior);

    return {menor, intermediario, maior, false};
}

int main() {
    double x{0.0}, y{0.0}, z{0.0};

    std::cout << "--- ANALIZADOR COMPARATIVO DE TRÊS VALORES ---\n";
    std::cout << "Digite 3 valores reais reparados por espaço: ";

    if (!(std::cin >> x >> y >> z)) {
        std::cerr << "Erro: Entrada de Dados Inválida.\n";
        return 1;
    }

    AnaliseValores resultado = analisar3(x,y,z);

    std::cout << "\n--- RESULTADO DA ANÁLISE ---\n";

    if (resultado.iguais) {
        std::cout << "Os 3 valores fornecidos são iguais: " 
                    << resultado.menor << "\n";
    }
    else {
        std::cout << "Menor valor: "
                    << resultado.menor << "\n"
                    << "Valor Intermediário: "
                    << resultado.intermediario << "\n"
                    << "Maior Valor: "
                    << resultado.maior << "\n"
                    << "Amplitude (M - m): "
                    << (resultado.maior - resultado.menor) << "\n";
    }

    return 0;
}