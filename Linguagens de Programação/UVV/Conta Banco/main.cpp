#include <iostream>
#include "ContaBanco.h"

int main()
{
    ContaBanco conta{"Maria"};
    std::cout << "Titular: "
              << conta.getNome()
              << '\n';

    conta.setNome("Joao");
    std::cout << "Novo Titular: "
              << conta.getNome()
              << '\n';

    return 0;
}