#include <dom.hpp>

bool Avaliacao::validar(u_int8_t nota){
    if((nota < 0) || (nota > 5)){
        return false;
    }
    return true;
}