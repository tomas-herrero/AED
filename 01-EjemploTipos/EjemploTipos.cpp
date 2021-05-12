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
assert(0.1f * 10.0f==1.0f);

// 6. Datos tipo string
assert(string("Algoritmos")+string(" y")+string(" Estructura")+string(" de")+string(" Datos")==string("Algoritmos y Estructura de Datos"));
assert(string("UTN")+string(" FRBA")!=string("UTN-FRBA"));
assert(string("Murciélago").length()>=string("Elefante").length());
assert(string("C").length()<=string("C++").length());

}