#ifndef DOMINIOS_HPP
#define DOMINIOS_HPP

#include <bits/stdc++.h>

using namespace std;

///
/// Avaliação possui uma nota de 0 a 5
///
class Avaliacao {
public:
///
/// @param nota digito 0,1,2,3,4 ou 5
///
    int nota;
    bool validar(int);
    Avaliacao(int);
};

///
/// A classe código se refere a chave primária de uma viagem
///
class Codigo {
public:
///
/// @param codigo string de 6 caracteres (letras ou digitos)
///
    string codigo;
///
/// @param validar
///
    bool validar(string);
    Codigo(string);
};

///
/// A classe Data refere-se a data temporal (dia/mês/ano)
///
class Data {
public:
///
/// @param DD Dia (1 - 31, conforme mês adequado)
/// @param MM Mês ( 1 - 12)
/// @param AA Ano (apenas os dois últimos digitos de um ano, 00 - 99)
///
    int DD, MM, AA;
    bool validar(int, int, int);
    Data(int d, int m, int a);
};

///
/// Dinheiro refere-se ao valor de uma atividade ou hospedagem no sistema
///
class Dinheiro {
public:
///
/// @param valor ( 00,00 - 200.000,00)
///
    double valor;
    bool validar(double);
    Dinheiro(double);
};

///
/// Duração de alguma atividade em dias
///
class Duracao {
public:
///
/// @param tempo quantidade de dias de uma atividade (0 - 360))
///
    int tempo;
    bool validar(int);
    Duracao(int);
};

///
/// A Classe Horário denota o horário de alguma atividade do sistema
///
class Horario {
public:
///
/// @param HH Horas (00 - 23)
/// @param MM Minutos (00 - 59)
///
    int HH, MM;
    bool validar(int, int);
    Horario(int h, int m);
};

///
/// Nome de uma viagem, destino, ativididade ou hospedagem.
///
class Nome {
public:
///
/// @param nome texto com até 30 caracteres.
///
    char nome[30];
    bool validar(char *);
    Nome(char *);
};

///
/// Senha para o acesso de uma conta.
///
class Senha {
public:
///
/// @param senha Cinco digitos, sem digito duplicado ou em ordem crescente/decrescente.
///
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
