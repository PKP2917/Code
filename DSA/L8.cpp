//-----> Functions in C++


/*
#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
 
    return ans;    
    
}

int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : "; 
    cin>>b;

    int answer = power(a,b);
    cout<<answer;

    return 0;
}
*/


/*
#include<iostream>
using namespace std;

void numcheck(int n){
    if (n == 0)
    {
        cout<<"The Number is Zero"<<endl;
    }
    else if(n%2 == 0){
        cout<<"The Number is Even"<<endl;
    }
    else{
        cout<<"The Number is Odd"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter Any Number : ";
    cin>>n;

    numcheck(n);

    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int fac(int a){
    if (a == 0)
    {
        return 1;
    }
    else if(a == 1)
    {
        return 1;
    }

    else{
        int fac = 1;

        for (int i = 1; i <= a ; i++)
        {
            fac = fac * i;
        }

        return fac;
    }
}

int nCr(int n, int r){

    int num = (fac(n));
    int den = ((fac(r) * fac(n-r)));

    int ans = num/den;

    return ans;
}

int main(){
    int n;
    int r;

    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter r : ";
    cin>>r;

    int res;
    res = nCr(n,r);

    cout<<"Answer = "<<res<<endl;


    return 0;
}
*/


/*
#include<iostream>
using namespace std;

bool isPrime(int n){

    if (n == 0)
    {
        cout<<"The Number is Zero."<<endl;
    }
    else if(n == 1)
    {
        cout<<"The Number is One."<<endl;
    }
    else
    {
        
        for (int i = 2 ; i <= n/2 ; i++)
        {
            if(n%i == 0){
                return 0;
            }
        }
        return 1;

    }
    
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int ans;
    ans = bool(n);

    if (ans == 0) 
    {
        cout<<"The Number is Not a Prime Number"<<endl;
    }
    else
    {
        cout<<"The Number is a Prime Number"<<endl;
    }
    
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int calap(int n){

    return (3 * n) + 7;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int ans = calap(n);

    cout<<"Value = "<<ans<<endl;

    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int fib(int n){

    if (n <= 1)
    {
        return n;
    }

    int currfib = 0;

    int prev1 = 1;
    int prev2 = 0;

    for (int i = 2; i <= n; i++)
    {
        currfib = prev1 + prev2;

        prev2 = prev1;
        prev1 = currfib;

    }

    return currfib;    
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int ans;

    ans = fib(n);
    cout<<"Answer = "<<ans<<endl;

    return 0;
}
*/



//---> Pass By Value

/*
#include<iostream>
using namespace std;

void dummy(int n){         //-> copy of n is created of n from main function, with different storage block.
    n++;
    cout<<"n = "<<n<<endl;
}

int main(){
    int n;                 //-> original n from main fucntion
    cout<<"Enter n : ";
    cin>>n;

    dummy(n);

    cout<<"n = "<<n<<endl;

    return 0;
}
*/