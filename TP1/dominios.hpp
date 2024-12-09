#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

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
    Avaliacao(int n);
    bool validar(int);

    void setNota(int n);
    int getNota();
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

    void setCodigo(string c);
    string getCodigo();
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

    void setData(int d, int m, int a);
    Data getData(int &d, int &m, int &a);
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

    void setValor(double v);
    double getValor();
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

    void setDuracao(int t);
    int getDuracao();
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

    void setHora(int h);
    void setMinuto(int m);
    Horario getHorario(int &h, int &m);
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

    void setNome(char *n);
    string getNome(char *n);
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

    void setSenha(unsigned int s);
    unsigned int getSenha();
};

#endif // DOMINIOS_HPP_INCLUDED
