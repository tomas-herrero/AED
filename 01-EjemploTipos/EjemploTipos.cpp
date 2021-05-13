#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int main ()
{
// 1. Datos tipo bool
assert(true or false);
assert(true and true != false);
assert(false or true == true);
assert(true!=(false or not true));

// 2. Datos tipo char
assert('a'=='a');
assert('+'!='-');

// 3. Datos tipo unsigned
assert(2u+7u==9u);
assert(14u-10u !=5u);
assert(22u/11u <=45u/5u);
assert(49u%10u>=2u*4u);

// 4. Datos tipo int
assert(-14 +13 ==-1);
assert(5-(10*-2)!=15);
assert(-67%14<=120/11);
assert(7*-3>=(44%10)*-7);

// 5. Datos tipo double
assert(1e-1 * 1e1==1e0);
assert(-35e-1+124e-2>=222e-2-6478e-3);
assert(999e-2/111e-2<=-1e1*-1e0);
assert(-1289e-3/4!=-322e-3);

// 6. Datos tipo string
assert("Algoritmos"s+" y"s+" Estructura"s+" de"s+" Datos"s=="Algoritmos y Estructura de Datos"s);
assert("UTN"s+" FRBA"s!="UTN-FRBA"s);
assert("Murciélago"s.length()>="Elefante"s.length());
assert("C"s.length()<="C++"s.length());

}