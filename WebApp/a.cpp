#include <iostream>
using namespace std;

// Base
class Parent
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;

    void printParent()
    {
        cout << num1 << num2 << num3 << endl;
    }
    friend void myfunction();
};

void myfunction()
{
    Parent p;
    p.num1;
    p.num2;
    p.num3;
}

// Derived class
class Child : Parent
{
public:
    void printChild()
    {
        cout << num2 << num3 << endl;
    }
};

int main()
{
    Child p;
   cout<<sizeof( p )<<endl;
    return 0;
}