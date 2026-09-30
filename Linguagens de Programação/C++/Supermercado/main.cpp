// Contendo a função principal e utilizando a classe Produto

#include "Produto.h"

int main() 
{
    Produto p{"Teclado", 150.};

    std::cout << "Produto: "
              << p.getNome()
              << '\n';
    
    std::cout << "Preço: R$"
              << p.getPreco()
              << '\n';

    p.setNome("Jiboia");
    p.setPreco(-1);

    std::cout << "Produto: "
              << p.getNome()
              << '\n';
    
    std::cout << "Preço: R$"
              << p.getPreco()
              << '\n';

    p.setPreco(10);

    std::cout << "Produto: "
              << p.getNome()
              << '\n';
    
    std::cout << "Preço: R$"
              << p.getPreco()
              << '\n';

    return 0;
}