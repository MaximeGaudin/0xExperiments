#include <iostream>
#include <map>
#include <utility>
#include <string>

int main ( ) {
  std::map < std::string, std::string > alias;
  alias.insert ( std::pair < std::string, std::string > ( "ll", "ls -al" ) );
  alias.insert ( std::pair < std::string, std::string > ( "sl", "ls" ) );

  auto it = alias.begin();
  while ( it != alias.end() ) {
    std::cout << it->first << " ~ " << it->second << std::endl;
    ++it;
  }

  return 0;
}
