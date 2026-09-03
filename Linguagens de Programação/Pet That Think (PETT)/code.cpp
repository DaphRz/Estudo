#include <iostream>
#include <string>
#include <windows.h>
// #include <clocale> - Acento BR - deu ERRO no Windows

// Representação de Objetos do IRD (Atributos e Métodos)

class Mouth {

// Atributos
    private:
        int teeth{32};            
        double salivaLevel{0.0};

// Métodos
    public:

        // Executa uma ação e altera estado interno
        void eat(const std::string& food) {
            std::cout << "[Boca] Mastigando e comendo: " << food << "\n";
            salivaLevel = 10.0;  // Reseta o nível de saliva após comer
        }

    // Acionado por Evento Externo - Babar
        void triggerDrool() {
            salivaLevel = 100.;
            std::cout << "[Boca] Alimento detectado! Nível de saliva em "
                        << salivaLevel << "%. (Drooling...)\n";
        }
};

// Objeto Principal: IRD (Incredible Robot Dog)
class RobotDog {

    // Atributos de Estados do Robô (Tabela de Memória)
    private:
        int height{32};
        double weight{6.3};
        double energySupply{90.};
        Mouth mouth;                // Componente - Objeto Interno

    // Métodos da Rotina Diária (Daily Routine)
    public:

        void wake() {
            std::cout << "[IRD] Acordando e ligando sistemas...\n";
        }

        void sleep() {
            std::cout << "[IRD] Entrando em modo repouso (Sleep)...\n\n";
        }

        // Simulação de Evento (Pavlov Event)
        void seeFood(const std::string& food) {
            std::cout << "\n--- EVENTO: Visão de Comida (" << food << ") ---\n";
            mouth.triggerDrool();  // Causa e Efeito
            mouth.eat(food);
            energySupply = std::min(100., energySupply + 15.);
        }

        void displayStatus() const {
            std::cout << "\n[STATUS IRD] Energia: " << energySupply
                        << "% | Peso: " << weight << "kg.\n";
        }
};

int main() {

    // Configura o Terminal para o idioma padrão do Sistema (Português)
    // std::setlocale(LC_ALL, "Portuguese");

    // Configura a saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "\n=== PROJETO PETT: INICIALIZANDO IRD ===\n\n";

    RobotDog myDog;

    // Execução Sequencial do Programa (Program Flow)
    myDog.wake();
    myDog.displayStatus();
    
    // Disparo de Evento Externo
    myDog.seeFood("Pizza");

    myDog.displayStatus();
    myDog.sleep();

    return 0;
}