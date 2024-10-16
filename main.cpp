#include<iostream>
using namespace std;
int sumfunction(int,int);

int main()
{
    int a=0;
    int b=0;
    sumfunction(6,8);
    sumfunction(2,2);
    sumfunction(3,3);
    sumfunction(1,4);
    sumfunction(5,5);
}
int sumfunction(int a,int b)
{
    int sum=0;
    sum=a+b;
    cout<<" sum of these number is"<<" "<<sum<<endl;
    return sum;
}

