#include <iostream>

using namespace std;

class A
{
public:
   int x;
};



int main()
{

    A a;
    
    a.x =10;
    A b(a);
    

    cout << &a << endl;
    cout << &b << endl;

    A* pa= &a;

   A* pb= &b;

    cout << (*pa).x << endl;
    cout << "Hi" <<endl;
    cout << (*pb).x << endl;
    cout << "Hi" <<endl;
    


}