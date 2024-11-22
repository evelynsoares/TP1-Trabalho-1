#ifndef DOMINIOS_HPP
#define DOMINIOS_HPP

#include <string>
#include <stdexcept>

using namespace std;

class Avaliacao {
private:
    int digito;
    void validar(int digito);
public:
    void setValor(int digito);
    int getValor() const;
};

class Codigo {
    
};

class Data {

};

class Dinheiro {
};

class Duracao {

};

class Horario {

};

class Nome {

};

class Senha {

};

#endif // DOMINIOS_HPP