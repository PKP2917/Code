//-----> C++ Basics_02 -> Conditionals and Loops


//---> Conditionals

/*
#include<iostream>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if(n>0)
    {
        cout<<"Positive Number";
    }
    else if(n==0)
    {
        cout<<"Zero";
    }
    else
    {
        cout<<"Negative Number";
    }

    return 0;
}
*/


//---> Loops


//-> while Loop

/*
#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    int fac=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    while (i<=n)
    {
        fac=fac*i;
        i++;  
    }

    cout<<"The Factorial of "<<n<<" is "<<fac<<"."<<endl;

    return 0;
}
*/

//-> do-while Loop

/*
#include<iostream>
using namespace std;

int main(){
    int i=1;

    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}
*/

/*
//-> Sum of n Numbers

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i++;
    }

    cout<<sum<<endl;

    return 0;
}
*/


/*
//-> Sum of All even numbers between i and n

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i = 2;
    int sum = 0;

    while (i <= n)
    {
        if (i%2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }   

    cout<<sum<<endl;

    return 0;
}
*/

/*
//-> Number is Prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    bool a = true;

    int i = 2;

    while (i < n)
    {
        if (n%i == 0)
        {
            a = false;
        }

        i++;
    }
    
    if (a == true)
    {
        cout<<"It is Prime Number"<<endl;
    }
    else{
        cout<<"It is not a Prime Number"<<endl;
    }
    
    return 0;
}
*/


