#include <iostream>

using namespace std;

int main()
{
    double Salary=0;
    cout<<"Яка у вас заробітня плата?\n";
    cin>>Salary;


    if(Salary<1000){
        cout<<"Працюй більше!\n";
    }
    if(Salary>1000)
    {
        if(Salary<1000000){
        cout<<"Ти молодець!\n";
        }
    }
    if(Salary>1000000)
    {
        cout<<"Ти міліонер!\n";
    }

}
