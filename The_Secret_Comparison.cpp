#include <iostream>
#include <iomanip>
#include <math.h>
int main(void)
{
    long long a;
    double sum=0.0;
    std::cin>>a;
    for(int i=0;i<a;i++)
    {
       long long  b;
        std::cin>>b;
        sum=sum+b;
    }
    std::cout << std::setprecision(1) << std::fixed;

   std::cout <<round(sum/a);
}
