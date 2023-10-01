#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0, z = 0;   //set variables
    int *a = NULL, *b = NULL, *c = NULL;   //set pointers
    cout << "Enter 3 integer values: " << endl;  //user to input numbers
    cin >> x >> y >> z;
    a = new int[1];  //create the memory pointers
    b = new int[1];
    c = new int[1];
    a[0] = x;       //create the value pointers 
    b[0] = y;
    c[0] = z;
    cout << "x : " << x << endl;   //print values of variables 
    cout << "y : " << y << endl;
    cout << "z : " << z << endl;
    cout << "a : " << a[0] << endl;
    cout << "b : " << b[0] << endl;
    cout << "c : " << c[0] << endl;

//delete memory 
    delete a;
    delete b;
    delete c;
}
