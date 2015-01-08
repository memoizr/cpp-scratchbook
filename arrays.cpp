#include <iostream>
#include <string>

using namespace std;
class Salute {
  string words = "mystring";
  public:
    string hello() {
      return words;
    }

};

int main()
{
  Salute hello;
  cout << hello.hello() << endl;
  return 0;
}

