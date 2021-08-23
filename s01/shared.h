template <class Type> class myclass {
  Type x;
public:
  myclass() { x=0; }
  void setx(Type y);
  Type  getx();
};

template <class Type> void myclass<Type>::setx(Type y) { x = y; }
template <class Type> Type myclass<Type>::getx() { return x; }

