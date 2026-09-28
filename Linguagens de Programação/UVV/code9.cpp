#include <string>
#include <iostream>

int main() {

    std::string nome{"Maria"};

    nome = "Joao";

    std::cout << "Quant de Caracteres: "
              << nome.size()
              << '\n';

    std::cout << nome[0] << '\n';
    std::cout << nome[1] << '\n';
    std::cout << nome[4] << '\n';

    std::string sobrenome{"Rocha"};
    std::string nomeCompleto = nome + " " + sobrenome; // Sobrecarga de Operadores

    std::cout << nomeCompleto << '\n';

    return 0;
}