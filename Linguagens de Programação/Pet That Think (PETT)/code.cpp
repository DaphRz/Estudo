#include <iostream>
#include <string>

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
        int weight{6.3};
        double energySupply{100.};
        Mouth mouth;                // Componente - Objeto Interno

    // Métodos da Rotina Diária (Daily Routine)
    public:

        void wake() {
            std::cout << "[IRD] Acordando e ligando sistemas...\n";
        }

        // Simulação de Evento (Pavlov Event)
        void seeFood(const std::string& food) {
            
        }
}