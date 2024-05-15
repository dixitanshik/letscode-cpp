#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int res=0;
    while(num!=0)
    {
        int last_digit=num%10;
        res=res*10+last_digit;
        num=num/10;
    }
    cout<<res;
    return 0;
}