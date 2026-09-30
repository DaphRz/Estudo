// Implementação das Funções-Membro

#include "Produto.h"

Produto::Produto(const std::string& nome, double preco)
    : nome{nome}, preco{preco}
{
}

std::string Produto::getNome() const 
{
    return nome;
}

double Produto::getPreco() const
{
    return preco;
}

void Produto::setNome(const std::string& nome)
{
    this->nome = nome;
}

void Produto::setPreco(double preco)
{
    if (preco >= 0.) 
    {
        this->preco = preco;
    }
}