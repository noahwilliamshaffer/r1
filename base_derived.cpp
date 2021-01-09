#include <iostream>

using namespace std;

class my_base_class {
public:
    my_base_class(int initial_value = 0) : x(initial_value) {
	cout << "Inside base class constructor" << endl;
	cout << "x == " << x << endl;
    }
    ~my_base_class() {
	cout << "Inside base class destructor" << endl;
// 	cout << "x == " << x << endl;
    }

    int get_x() const {
	return x;
    }
private:
    int x;
};

class my_derived_class : public my_base_class {
public:
    my_derived_class(int initial_x_value = 0, int initial_y_value = 0) 
	: my_base_class(initial_x_value), y(initial_y_value) {
	cout << "Inside derived class constructor" << endl;
	cout << "x == " << get_x() << endl;
	cout << "y == " << y << endl;
    }
    ~my_derived_class() {
	cout << "Inside derived class destructor" << endl;
// 	cout << "x == " << get_x() << endl;
// 	cout << "y == " << y << endl;
    }

private:
    int y;
};


int main() {
    my_derived_class mdc1;

    my_derived_class mdc2(2, 4);

    return(0);
}
