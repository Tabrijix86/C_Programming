#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto an_int = 26;
    auto a_bool = false;
    auto a_double = 26.24;
    auto ptr = &a_double;

    // Print actual type names
    cout << typeid(a_bool).name() << "\n";  // Should print "bool"
    cout << typeid(an_int).name() << "\n";  // Should print "int"
    cout << typeid(a_double).name() << "\n"; // Should print "float"

    return 0;
}
