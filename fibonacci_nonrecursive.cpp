#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
	cout << argv[0] << " k" << endl;
	exit(EXIT_FAILURE);
    }

    int k = atoi(argv[1]);
    
    long fib;

    if (k == 0 || k == 1) {
	fib = 1;
    } else {
	long f1 = 1; // f(k-1)
	long f2 = 1; // f(k-2)

	for (int i = 2; i <= k; ++i) {
	    fib = f1 + f2;
	    f2 = f1;
	    f1 = fib;
	}
    }

    cout << k << ": " << fib << endl;
    return(EXIT_SUCCESS);
}
