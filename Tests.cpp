// tester class for JJ's Journey
// this is the class that runs all of the tests
#include "TestTheTester.h"
#include <iostream>
using namespace std;

int main(){
  int testsFailed = 0;

  TestTheTester testTheTester;
  testsFailed += testTheTester.run();

  cout << endl << testsFailed << " Tests Failed" << endl;

return 0;
}
