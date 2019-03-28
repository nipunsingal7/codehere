#include<iostream>
#include<conio.h>

class cal
{  public: int sum,sub;
           float div,mult;
:

           int sub();
           int mult();
           int sum();
           int div();

};

template <class x>
int cal::sum(x a,x b)
{cout<<"sum is:"<<a+b;
}


int main()
{
 cal obj;
}

