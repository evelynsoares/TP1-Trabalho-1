#ifndef DOMINIOS_HPP
#define DOMINIOS_HPP

#include <cstdint>
#include <stdexcept>
#include <cstring>

using namespace std;

class Avaliacao {
    public:
        uint8_t nota;
        bool validar(uint8_t);
        Avaliacao(uint8_t);
};

class Codigo {
    public:
        string codigo;
        bool validar(string);
        Codigo(string);
};

class Data {
    public:
        uint8_t DD;
        uint8_t MM;
        uint8_t AA;
        bool validar(uint8_t, uint8_t, uint8_t);
        Data(uint8_t,uint8_t,uint8_t);

};

class Dinheiro {
    public:
        double valor;
        bool validar(double);
        Dinheiro(double);
};

class Duracao {
    public:
        uint16_t tempo;
        bool validar(uint16_t);
        Duracao(uint16_t);
};

class Horario {
    public:
        uint8_t HH;
        uint8_t MM;
        bool validar(uint8_t, uint8_t);
        Horario(uint8_t, uint8_t);
};

class Nome {
    public:
        char nome[30];
        bool validar(char *);
        Nome(char *);
};

class Senha {
    public:
        unsigned int senha;
        bool validar(unsigned int);
        Senha(unsigned int);
};

inline Avaliacao::Avaliacao(uint8_t nota){
    try{
        if(validar(nota)){ // Verifica se a nota é valida. Sem sim, atualiza nota no objeto.
            this->nota = nota;
        } else {
            throw nota;
        }
    } catch (uint8_t nota) {
        cout << "Erro: Nota inválida. Valor entrado: " << nota << endl; // Apenas diz isso, criando um objeto vazio.
    }

}

inline Codigo::Codigo(string codigo){
    try{
        if(validar(codigo)){ // Verifica se valor é válido. Se sim, atualiza objeto.
            this->codigo = codigo;
        } else {
            throw codigo;
        }
    } catch (string codigo) {
        cout << "Erro: Código inválido. Valor entrado: " << codigo << endl; // Apenas diz isso, criando um objeto vazio.
    }
}

inline Data::Data(uint8_t DD, uint8_t MM, uint8_t AA){
    try{
        if(validar(DD, MM, AA)){ // Verifica se valor é válido. Se sim, atualiza objeto.
            this->DD = DD;
            this->MM = MM;
            this->AA = AA;
        } else {
            string aux = to_string(DD) + "/" + to_string(MM) + "/" + to_string(AA);
            throw aux;
        }
    } catch (string aux) {
        cout << "Erro: Data inválida. Valor entrado: " << aux << endl; // Apenas diz isso, criando um objeto vazio.
    }
}

inline Dinheiro::Dinheiro(double valor){
    if (validar(valor)){
        this->valor = valor;
    }
    else {
        cout << "Erro: Valor de deinheiro inválido. Valor entrado: " << valor << endl;
    }
}

inline Duracao::Duracao(uint16_t tempo){
    if (validar(tempo)){
        this->tempo = tempo;
    }
    else {
        cout << "Erro: duração inválida. Valor entrado: " << tempo << endl;
    }
}

inline Horario::Horario(uint8_t HH, uint8_t MM) {
    try {
        if (validar(HH, MM)) {
            this->HH = HH;
            this->MM = MM;
        } else {
            string aux = to_string(HH) + ":" + to_string(MM);
            throw aux;
        }
    } catch (string aux) {
        cout << "Erro: Horário inválido. Valor entrado: " << aux << endl;
    }
}

inline Nome::Nome(char* nome) {
    try {
        if (validar(nome)) {
            strncpy(this->nome, nome, 30);
            this->nome[29] = '\0';
        } else {
            throw string(nome);
        }
    } catch (string aux) {
        cout << "Erro: Nome inválido. Valor entrado: " << aux << endl;
    }
}

inline Senha::Senha(unsigned int senha) {
    try {
        if (validar(senha)) {
            this->senha = senha;
        } else {
            throw senha;
        }
    } catch (unsigned int senha) {
        cout << "Erro: Senha inválida. Valor entrado: " << senha << endl;
    }
}

#endif // DOMINIOS_HPP_INCLUDED
