#include <iostream>
#include "chain.h"

using namespace std;

int main2()
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

int main3(){
    chain<char> chain1;
    chain1.insert(0, 'e');
    chain1.insert(0, 'd');
    chain1.insert(0, 'c');
    chain1.insert(0, 'b');
    chain1.insert(0, 'a');
    chain1.insert(0, 'f');
    chain1.insert(3, 'g');
    chain1.insert(7, 'h');

    chain1.output(cout);
    cout << endl;
    char ret = chain1.set(1, 'Q');
    chain1.output(cout);
    cout <<endl <<ret << endl;
    return 0;
}

int main4(){
    chain<char> chain1;
    chain1.insert(0, 'e');
    chain1.insert(0, 'd');
    chain1.insert(0, 'c');
    chain1.insert(0, 'b');
    chain1.insert(0, 'a');
    chain1.insert(0, 'f');
    chain1.insert(3, 'g');
    chain1.insert(7, 'h');

    chain1.output(cout);
    cout << endl;
    chain1.removeRange(0, 7);
    chain1.output(cout);
    cout << endl;
    return 0;
}


int main(){
    chain<char> chain1;
    chain1.insert(0, 'e');
    chain1.insert(0, 'h');
    chain1.insert(0, 'c');
    chain1.insert(0, 'b');
    chain1.insert(0, 'a');
    chain1.insert(0, 'e');
    chain1.insert(3, 'g');
    chain1.insert(7, 'h');

    chain1.output(cout);
    cout << endl;
    int index =  chain1.lastIndexOf('h');
    cout << index << endl;
    index =  chain1.lastIndexOf('e');
    cout << index << endl;
    index =  chain1.lastIndexOf('l');
    cout << index << endl;
    return 0;
}
