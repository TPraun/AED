/* main.cpp
    Ejemplos de Valores y Operaciones de Tipos de Datos
 */

#include <cassert>
#include <string>

int main(void){

    //Bool
    assert(true|false);
    assert(true & false == false );
    assert(~false);

    //Int
    assert(1<2);
    assert(2-3>=(-1));
    assert(1+2!=8);
    assert(3/2==1);
    assert(2!='2');

    //Char
    assert('1'-'0'+'2'>= ( 51 & '3'));
    assert('n' | 'y' == 'y');
    assert('a' == 97);

    //Double, Float, long double, unsigned long long
    assert(1E19 < 18446744073709551615u );
    assert((float)3/2==1.5);
    assert(2.75 - 1.25 == 1.5);

    //Strings
    std::string strg = "hola mundo";
    assert(strg.length() == 10);
    assert(strg + "."=="hola mundo.");
    assert(strg.compare("hola mundo") == 0);

    return 0;
}