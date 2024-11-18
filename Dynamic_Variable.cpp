#include <bits/stdc++.h>
using namespace std;

int *p;
int *q;

int valueFunc()
{
    int x = 15;
    return x;
}

void func()
{
    int x = 10;
    p = &x;
    cout << "print from func-> " << x << endl;
    return;
}

void dFunc()
{
    int *x = new int;
    *x = 5;
    q = x;
    cout << "print from dynamic func-> " << *x << endl;
    return;
}

int main()
{
    int x = valueFunc();
    cout << "print from MAIN for static return-> " << x << endl;

    dFunc();
    cout << "print from MAIN dynamic func-> " << *q << endl;
    func();
    cout << "print from MAIN func-> " << *p << endl;

    int *a = new int;
    *a = 10;
    delete a;

    return 0;
}

/*
output in online compiler

for get value from static variable return
print from MAIN for static return-> 15

for dynamic variable
print from dynamic func-> 5
print from MAIN dynamic func-> 5

for static variable
print from func-> 10
print from MAIN func-> 0

*/