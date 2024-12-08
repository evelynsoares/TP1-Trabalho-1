#ifndef DOMINIOS_HPP
#define DOMINIOS_HPP

#include <bits/stdc++.h>

using namespace std;

class Avaliacao {
public:
    int nota;
    bool validar(int);
    Avaliacao(int);
};

class Codigo {
public:
    string codigo;
    bool validar(string);
    Codigo(string);
};

class Data {
public:
    int DD, MM, AA;
    bool validar(int, int, int);
    Data(int d, int m, int a);
};

class Dinheiro {
public:
    double valor;
    bool validar(double);
    Dinheiro(double);
};

class Duracao {
public:
    int tempo;
    bool validar(int);
    Duracao(int);
};

class Horario {
public:
    int HH, MM;
    bool validar(int, int);
    Horario(int h, int m);
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

inline Avaliacao::Avaliacao(int nota){
    try{
        if(validar(nota)){
            this->nota = nota;
        } else {
            throw nota;
        }
    } catch (int nota) {
        cout << "Erro: Nota invalida. Valor entrado: " << nota << endl;
    }
}

inline Codigo::Codigo(string codigo){
    try{
        if(validar(codigo)){
            this->codigo = codigo;
        } else {
            throw codigo;
        }
    } catch (string codigo) {
        cout << "Erro: Codigo invalido. Valor entrado: " << codigo << endl;
    }
}

inline Data::Data(int DD, int MM, int AA){
    try{
        if(validar(DD, MM, AA)){
            this->DD = DD;
            this->MM = MM;
            this->AA = AA;
        } else {
            string aux = to_string(DD) + "-" + to_string(MM) + "-" + to_string(AA);
            throw aux;
        }
    } catch (string aux) {
        cout << "Erro: Data invalida. Valor entrado: " << aux << endl;
    }
}

// 170102785
inline Dinheiro::Dinheiro(double valor){
    try {
        if (validar(valor)){
            this->valor = valor;
        }
        else {
            throw valor;
        }
    } catch (double valor) {
        cout << "Erro: Dinheiro invalido. Valor entrado: " << valor << endl;
    }
}

// 170102785
inline Duracao::Duracao(int tempo){
    try {
        if (validar(tempo)){
            this->tempo = tempo;
        }
        else {
            throw tempo;
        }
    }
    catch (int tempo){
        cout << "Erro: Duracao invalida. Valor entrado: " << tempo << endl;
    }
}

inline Horario::Horario(int HH, int MM) {
    try {
        if (validar(HH, MM)) {
            this->HH = HH;
            this->MM = MM;
        } else {
            string aux = to_string(HH) + ":" + to_string(MM);
            throw aux;
        }
    } catch (string aux) {
        cout << "Erro: Horario invalido. Valor entrado: " << aux << endl;
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
        cout << "Erro: Nome invalido. Valor entrado: " << aux << endl;
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
        cout << "Erro: Senha invalida. Valor entrado: " << senha << endl;
    }
}
#endif // DOMINIOS_HPP_INCLUDED
