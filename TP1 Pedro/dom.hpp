#include <bits/stdc++.h>

using namespace std;

class Avaliacao {
    public:
        u_int8_t nota;
        bool validar(u_int8_t);
        Avaliacao(u_int8_t);
};

class Codigo {
    public:
        string codigo;
        bool validar(string);
        Codigo(string);
};

class Data {
    public:
        u_int8_t DD;
        u_int8_t MM;
        u_int8_t AA;
        bool validar(u_int8_t, u_int8_t, u_int8_t);
        Data(u_int8_t,u_int8_t,u_int8_t);

};

class Dinheiro {
    public:
        double valor;
        bool validar(double);
        Dinheiro(double);
};

class Duracao {
    public:
        u_int16_t tempo;
        bool validar(u_int16_t);
        Duracao(u_int16_t);
};

class Horario {
    public:
        u_int8_t HH;
        u_int8_t MM;
        bool validar(u_int8_t, u_int8_t);
        Horario(u_int8_t, u_int8_t);
};

class Nome {
    public:
        char nome[30];
        bool validar(char *);
        Nome(char *);
};

class Senha {
    public:
        u_int senha;
        bool validar(u_int);
        Senha(u_int);
};

inline Avaliacao::Avaliacao(u_int8_t nota){
    try{
        if(validar(nota)){ // Verifica se a nota é valida. Sem sim, atualiza nota no objeto.
            this->nota = nota;
        } else {
            throw nota;
        }
    } catch (u_int8_t nota) {
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

inline Data::Data(u_int8_t DD, u_int8_t MM, u_int8_t AA){
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
