#include <iostream>
#include "myString.h"
using namespace std;


int main()
{
    char a[] = { 'a', 'b', 'c' };
    size_t size = 3;
    
    myString s1;
    myString s2(a, size);

    cout << "String 1: ";
    s1.print();

    cout << "String 2: ";
    s2.print();

    cout << "Length of s2: " << s2.length() << endl;

    //no errors but doesn't append
    s2.append('d');
    s2.append('e');
    s2.append('f');
    s2.append('g');
    s2.append('h');
    cout << "Append stuff: ";
    s2.print();

    //not sure what to do after returning
    //also kinda broken

    myString s3;

    cout << "Copy s2 to s3" << endl;
    s3.copy(s2);
    s3.print();


    cout << "Erase 3" << endl;
    s2.erase(3, 2);
    s2.print();
}
