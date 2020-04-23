#include <iostream>
using namespace std;

class LearnConstructor
{
private:
  int i;
public:
  LearnConstructor(int i);
  ~LearnConstructor();
};

LearnConstructor::LearnConstructor(int i)
{
  this->i = i;
  cout << "constructor: this->i=" << this->i << endl;
}

LearnConstructor::~LearnConstructor()
{
  cout << "destructor" << endl;
}

int main(int argc, char const *argv[])
{
  LearnConstructor lc(1);
  return 0;
}

