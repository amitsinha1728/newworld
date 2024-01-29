

#include <iostream>

using namespace std;
class A
{

    int x =10;
  public:
   A()
   {}
   A(A &a)
   {
      x= a.x ;
   }
   void SetX(int x_)
   {
     x= x_;
   }

   void     PrintX()
   {
      cout << x << endl;
   }
};

int main()
{
    A b;
    b.SetX(13);
    A  n(b);
    n.PrintX();
    return 0;
}