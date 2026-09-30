#pragma once

#include <string>

class Livro 
{
    private:
        std::string titulo;
        std::string autor;
        int anoPubli;

    public:
        Livro(const std::string& titulo, const std::string& autor, int anoPubli);

        
};