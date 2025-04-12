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
        int bit = ((n)&(1));   -> to extract the last bit
        
        ans = (bit * pv) + ans;    //-> it multiplies power of 10 to the bit and then add with previous answer

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
        int digit = n%10;      --> to extract the last digit

        if (digit == 1)
        {
            ans = ans + pv;     //-> it add the power to 2 to the ans
        }
 
        n = n/10;    --> replace the bit string
        i++;
        pv *= 2;     //-> it add the power to 2 to the ans
    }
    
    cout<<ans<<endl; 

    return 0;
}
*/