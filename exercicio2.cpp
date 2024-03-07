#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
  for(int i = 0; i < 34; i++) {
    if(34 == fibonacci(i)) {
      cout << "O número informado pertence a sequência" << endl;
      break;
    }
  }

  return 0;
}