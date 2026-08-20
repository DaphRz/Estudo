// Processamento Estático de Médias e Tratamento do Fluxo de Entrada

#include <iostream>
#include <limits>
#include <iomanip>  // Necessário p (std::setprecision) e (std::fixed)

// Função Auxiliar p realizar a Leitura Segura de um Double +
double notaSegura(const std::string& prompt) 
{
    double valor{0.0};

    while (true)
    {
        std::cout << prompt;

        if (std::cin >> valor && valor >= 0. && valor <= 10.) 
        {
            return valor;  // Leitura bem-sucedida e valor dentro da faixa válida
        }

        // Trata a Falha de Leitura
        std::cout << "Entrada inválida! Digite uma Nota Numérica entre 0.0 e 10.0\n\n";

        std::cin.clear();  // Limpa as Sinalizações de Erro (failbit) do (std::cin)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Descarta Entrada Inválida
    }
}

int main()
{
    std::cout << "\n--- CÁLCULO DE MÉDIA PONDERADA --\n";

    double nota = notaSegura("Digite a Nota 1 (Peso 2): ");
    double nota1 = notaSegura("Digite a Nota 2 (Peso 3): ");
    double nota2 = notaSegura("Digite a Nota 3 (Peso 5): ");

    constexpr int peso{2};
    constexpr int peso1{3};
    constexpr int peso2{5};

    // Conversão Explícita de int p double usando (static_cast)
    double somaPesos = static_cast<double>(peso + peso1 + peso2);
    double mediaPonderada = ((nota * peso) + (nota1 * peso1) + (nota2 * peso2)) / somaPesos;

    // Formatação da Saída com 2 decimais
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\n--- RELATÓRIO FINAL ---\n";
    std::cout << "Média Ponderada Apurada: " << mediaPonderada << "\n";

    if (mediaPonderada >= 7.)
    {
        std::cout << "Status: APROVADO\n";
    } 
    else if (mediaPonderada >= 5.)
    {
        std::cout << "Status: EM RECUPERAÇÃO\n";
    }
    else
    {
        std::cout << "Status: REPROVADO\n";
    }

    return 0;
}