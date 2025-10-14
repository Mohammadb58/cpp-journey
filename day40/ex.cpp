#include <string>
#include <iostream>

using namespace std;

void f(int N) {
  	int left = 100;
  	for (int i = 0; i < N; i++) {
    	if (i % 10 == 0) {
            cout << "\nleft--";
 	        left--;
 	    }
 	    if (left == 0) {
            cout << "\nbreak";
   	        break;
  	    }
  	}
}

int main() {
    f(1000);
}