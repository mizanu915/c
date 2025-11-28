#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    for (int i=0;i<6;i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    for (int i=0;i<6;i++){
        cout<<"the " <<i+1<<" element is : " arr[i];
    }
}