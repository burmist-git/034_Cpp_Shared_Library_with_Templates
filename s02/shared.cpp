#include "shared.h"
template <class Type> void myclass<Type>::setx(Type y) { x = y; }
template <class Type> Type myclass<Type>::getx() { return x; }
// Instantiate myclass for the supported template type parameters
template class myclass<int>;
template class myclass<long>;
