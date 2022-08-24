#include <iostream>  
using namespace std;  
int main()  
{
    int a[10];
    int sum=0,i;
    for(i=0;i<10;i++){
        cout<<"enter the"<< i+1 <<"element:";
        cin>>a[i];
    }
    for(i=0;i<10;i++){
        sum+=a[i];
    }
    cout<<"the sum of elements is:"<<sum;


    return 0;  
}