//-----> C++ Basics_05 -> Conversion of Decimals and Binary Numbers


//---> Decimal to Binary

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int ans = 0;
    int i = 0;
    int pv = 1;

    while (n != 0)
    {
        int bit = ((n)&(1));
        
        ans = (bit * pv) + ans;

        n = (n >> 1);
        pv *= 10;
        i++;

    }
    
    cout<<ans<<endl;

    return 0;
}
*/


//---> Binary to Decimal

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 0;
    int pv = 1;
    int ans = 0;

    while (n != 0)
    {
        int digit = n%10;

        if (digit == 1)
        {
            ans = ans + pv;
        }

        n = n/10;
        i++;
        pv *= 2;  
    }
    
    cout<<ans<<endl; 

    return 0;
}
*/