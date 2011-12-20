#include <iostream>
#include <string>
#include <map>
#include <utility>

int main ( ) {
  std::map < std::string, std::string > alias;
  alias.insert ( std::pair < std::string, std::string > ( "ll", "ls -al" ) );
  alias.insert ( std::pair < std::string, std::string > ( "sl", "ls" ) );
  alias.insert ( std::pair < std::string, std::string > ( "g pom", "git push origin master" ) );
  alias.insert ( std::pair < std::string, std::string > ( "g plom", "git pull origin master" ) );

  for ( auto kv : alias )
    std::cout << kv.first << " ~ " << kv.second << std::endl;

  return 0;
}
