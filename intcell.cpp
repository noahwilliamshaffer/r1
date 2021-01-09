#include <iostream>

class IntCell {
public:
	explicit IntCell(int iv = 0) : sv(iv) {}
	IntCell(int iv) : sv(iv) {}
	int read() {
		return sv;
	}
	void write(int nv) {
		sv = nv;
	}
private:	
	int sv;
};

using namespace std;

int main() {
	IntCell a(10);
	cout << a.read() << endl;
}
