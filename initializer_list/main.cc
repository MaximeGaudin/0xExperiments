#include <iostream>
#include <string>
#include <map>
#include <utility>

int main ( ) {
  std::map < std::string, std::string > alias = { 
    std::pair < std::string, std::string > ( "ll", "ls -al" ),
    std::pair < std::string, std::string > ( "sl", "ls" ),
    std::pair < std::string, std::string > ( "g pom", "git push origin master" ),
    std::pair < std::string, std::string > ( "g plom", "git pull origin master" ) 
  };

  auto it = begin(alias);
  while ( it != end(alias) ) {
    std::cout << it->first << " ~ " << it->second << std::endl;
    ++it;
  }

  return 0;
}
