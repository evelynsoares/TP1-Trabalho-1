#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

#include <stdexcept>
#include "dominios.hpp"


class TUAvaliacao {
private:
    const static int VALOR_VALIDO =  5 ;
    const static int VALOR_INVALIDO = -1;
    const static int VALOR_INVALIDO2 = 6;
    const static int VALOR_INVALIDO3 = 1000;
    Avaliacao *avaliacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testerCenarioValorInvalido();
public:
    void setNota(int n);
    int getNota();
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

/*
class TUCodigo {
    private:
        string VALOR_VALIDO = "AzH301";
        string VALOR_INVALIDO = "1234567";
        string VALOR_INVALIDO2 = "ab";
        string VALOR_INVALIDO3 = "!567)";
        Codigo *codigo;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};



class TUData {
    private:
        int VALOR_VALIDO[3] =  {29, 2, 2024} ;
        int VALOR_INVALIDO[3] = {31, 4, 2020};
        int VALOR_INVALIDO2[3] = {29, 2, 1900};
        int VALOR_INVALIDO3[3] = {29, 2, 2023};
        Data *data;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUDinheiro {
    private:
        double VALOR_VALIDO = 1000.55;
        double VALOR_INVALIDO = 200001;
        double VALOR_INVALIDO2 = -55.;
        Dinheiro *dinheiro;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUDuracao {
    private:
        const static int VALOR_VALIDO = 220;
        const static int VALOR_INVALIDO = 361;
        Duracao *duracao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


class TUHorario {
    private:
        int VALOR_VALIDO[2] = {22, 32};
        int VALOR_INVALIDO[2] = {24, 00};
        Horario *horario;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUNome {
    private:
        char VALOR_VALIDO[30] = "nao sei o que escrever";
        char VALOR_INVALIDO[30] = "1234567890123456789011";
        Nome *nome;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUSenha {
    private:
        char VALOR_VALIDO =  86259;
        char VALOR_INVALIDO = 12345;
        char VALOR_INVALIDO2 = 54321;
        char VALOR_INVALIDO3 = 862590;
        char VALOR_INVALIDO4 = 11111;
        Senha *senha;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testerCenarioValorInvalido();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};
*/
#endif // TESTES_HPP_INCLUDED
