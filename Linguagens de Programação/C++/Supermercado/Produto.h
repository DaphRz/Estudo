// Declaração da Classe

#pragma once

#include <string>

class Produto 
{
    private:
        double preco;
        std::string nome;

    public:
        Produto(const std::string& nome, double preco);

        std::string getNome() const;

        double getPreco() const;

        void setPreco(double novoPreco);

        void setNome(const std::string& novoNome);
};