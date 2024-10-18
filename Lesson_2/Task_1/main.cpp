#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    cout<<"Entry 5 numbers\n";
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];

    cout<<"Your numbers: \n";
    for(int i=0; i<5; i++)
        cout<<arr[i]<<endl;

}
