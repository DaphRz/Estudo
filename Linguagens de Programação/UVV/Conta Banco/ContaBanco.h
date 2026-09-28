#pragma once

#include <string>

class ContaBanco
{
    private:
        std::string nomeTitular;

    public:
        ContaBanco(const std::string& nome);

        void setNome(const std::string& nome);
        std::string getNome() const;
};