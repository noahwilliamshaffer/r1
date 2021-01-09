#include <iostream>
#include <cstdlib>

using namespace std;

long fib(int k) {
    if (k == 0 || k == 1) 
	return 1;
    return fib(k-1) + fib(k-2);
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
	cout << argv[0] << " k" << endl;
	exit(EXIT_FAILURE);
    }

    int k = atoi(argv[1]);
    
    cout << k << ": " << fib(k) << endl;
    return(EXIT_SUCCESS);
}
