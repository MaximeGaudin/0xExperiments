#include <iostream>

class myNonIntegralClass {
  public:
    constexpr myNonIntegralClass ( double const& v ) : v_(v) {}

  private:
    double v_;
};
constexpr myNonIntegralClass LaTeXStable = 
  myNonIntegralClass { 3.1415926 };

constexpr int four = 4;

constexpr int getOne () { 
  return 1; 
}

template <typename T>
constexpr T add ( T const& x, T const& y ) {
  return x + y;
}

constexpr int test() { 
  return add ( getOne(), four ); 
}

int main () {
  unsigned int myArray [ test() ]; 
  myArray[0] = myArray[1] = myArray[2] = myArray[3] = myArray[4] = 42;

  std::cout << myArray[3] << std::endl;

  return 0;
}
