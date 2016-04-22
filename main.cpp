#include <iostream>
#include "chain.h"

using namespace std;

int main()
{
    chain<char> chain1;
    chain1.insert(0, 'e');
    chain1.insert(0, 'd');
    chain1.insert(0, 'c');
    chain1.insert(0, 'b');
    chain1.insert(0, 'a');
    chain1.insert(0, 'f');
    chain1.insert(3, 'g');
    chain1.insert(7, 'h');
    chain1.output(std::cout);
    cout << endl;
    chain1.erase(0);
    chain1.erase(4);
    chain1.output(std::cout);
    cout << endl;
    return 0;
}

