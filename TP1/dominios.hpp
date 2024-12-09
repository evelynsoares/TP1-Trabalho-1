#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <bits/stdc++.h>

using namespace std;

class Avaliacao {
public:
    int nota;
    Avaliacao(int n);
    bool validar(int);

    void setNota(int n);
    int getNota();
};

class Codigo {
public:
    string codigo;
    bool validar(string);
    Codigo(string);

    void setCodigo(string c);
    string getCodigo();
};

class Data {
public:
    int DD, MM, AA;
    bool validar(int, int, int);
    Data(int d, int m, int a);

    void setData(int d, int m, int a);
    Data getData(int &d, int &m, int &a);
};

class Dinheiro {
public:
    double valor;
    bool validar(double);
    Dinheiro(double);

    void setValor(double v);
    double getValor();
};

class Duracao {
public:
    int tempo;
    bool validar(int);
    Duracao(int);

    void setDuracao(int t);
    int getDuracao();
};

class Horario {
public:
    int HH, MM;
    bool validar(int, int);
    Horario(int h, int m);

    void setHora(int h);
    void setMinuto(int m);
    Horario getHorario(int &h, int &m);
};

class Nome {
public:
    char nome[30];
    bool validar(char *);
    Nome(char *);

    void setNome(char *n);
    string getNome(char *n);
};

class Senha {
public:
    unsigned int senha;
    bool validar(unsigned int);
    Senha(unsigned int);

    void setSenha(unsigned int s);
    unsigned int getSenha();
};

#endif // DOMINIOS_HPP_INCLUDED
