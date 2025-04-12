//-----> C++ Problem Solving

 
/*
1)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;

    int i = 0;

    while (n != 0)
    {
        int rem = n % 10;
        cout<<rem;
        n = n / 10;
        i++;
    }

    return 0;
}
*/


/*
2)

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int m = n;
    int mask = 0;

    if (n == 0)  //-> Edge case ('0')
    {
        cout<<"1";
    }
    
    //-> remaining cases
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;

    cout<<ans<<endl;
    

    return 0;
}
*/


/*
3)

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool a = false;

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            a = true;
        }
    }
    
    if (a == true)
    {
        cout<<"It is a power of two";
    }
    else{
        cout<<"It is not a power of two";
    }
    
    return 0;
}
*/
