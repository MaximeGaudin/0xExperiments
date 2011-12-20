#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

typedef unsigned int T;

int main () {
  std::vector<T> v = { 1, 2, 3, 4, 5 };

  std::for_each( begin(v), end(v), [](T& i) { i *= 2; } );

  T sum = 0;
  std::for_each( begin(v), end(v), [&sum](T& i) { sum += i; } );

  std::copy ( begin(v), end(v), std::ostream_iterator<T> ( std::cout, ", " ) ); 
  std::cout << std::endl;

  std::cout << "Sum : " << sum << std::endl;

  return 0;
}
