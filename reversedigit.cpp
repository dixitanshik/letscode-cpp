#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    while(num>0)
    {
        int last_digit=num%10;
        cout<<last_digit;
        num=num/10;
    }
    cout<<endl;
    return 0;
}