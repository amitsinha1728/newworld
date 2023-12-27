#include <iostream>

using namespace std;

void staticclas()
{

    int static count =0;
    count ++;

    cout << "count value is " << count << endl;
}

int main()
{

    staticclas();
    staticclas();

}