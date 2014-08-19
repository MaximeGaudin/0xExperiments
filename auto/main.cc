#include <iostream>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main ( ) {
  map < string, string > alias;
  alias.insert ( pair < string, string > ( "ll", "ls -al" ) );
  alias.insert ( pair < string, string > ( "sl", "ls" ) );

  auto it = alias.begin();
  while ( it != alias.end() ) {
    cout << it->first << " ~ " << it->second << endl;
    ++it;
  }

  return 0;
}
