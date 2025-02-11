//-----> C++ Basics_04



//---> Bitwise Operators

/*
#include<iostream>
using namespace std;

int main(){
    
    int a = 8;
    int b = 2;

    cout<<(a&b)<<endl;  //-> AND operator
    cout<<(a|b)<<endl;  //-> OR operator
    cout<<(~a)<<endl;   //-> NOT operator
    cout<<(~b)<<endl;   //-> NOT operator
    cout<<(a^b)<<endl;  //-> XOR operator
    cout<<(a<<b)<<endl; //-> Left Shift
    cout<<(a>>b)<<endl; //-> Right Shift
    cout<<(a++)<<endl;  //-> Post Increment
    cout<<(b++)<<endl;
    cout<<(++a)<<endl;  //-> Pre Increment
    cout<<(++b)<<endl;

    return 0;
}
*/


//---> for Loop

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<"---------------------------------------------"<<endl;

    for (int i = 1; i < 11; i++)
    {
        cout<<""<<n<<"\tX\t"<<""<<i<<"\t=\t"<<""<<n*i<<endl;;
    }
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool prime=true;

    for (int i = 2; i < n; i++)
    {
        if((n%i)==0)
        {
            prime = false;
            break;
        }
    }  

    if(prime==true)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number";
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int sum = 0;

    for (int i = 0; i <= n ; i++)
    {
        sum = sum + i;
    }
    
    cout<<sum<<endl;
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int n1 = 0, n2 = 1;

    for (int i = 0; i <= n ; i++)
    {
        cout<<n1<<" ";

        int nextn = n1+n2;
        n1 = n2;
        n2 = nextn;
    }

    cout<<endl;
    
    return 0;
}
*/


//---> BREAKS AND CONTINUE


//-> BREAK STATEMENT

/*
#include<iostream>
using namespace std;

int main(){
    
    for (int i = 0; i < 11; i++)
    {
        if(i==9)
        {
            break;    //-> breaks the loop and ends and does not print the further code.
        }

        cout<<i<<endl;  
    }

    return 0;
}
*/


//-> CONTINUE STATMENT

/*
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 11; i++)
    {
        if(i==6)
        {
            continue;         //-> does not print the ongoing alteration for eg. here 6 will not be printed.
        }

        cout<<i<<endl;       
    }
    
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int sum = 0;
    int pro = 1;

    for (int i = 0; n>0 ; i++)
    {
        int n1;

        n1 = n%10;
        n = n/10;

        sum = sum + n1;
        pro = pro * n1;
    }

    int ans = pro - sum;
    cout<<ans<<endl;

    return 0;
}
*/



//---> Switch Statements

/*
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter age : ";
    cin>>a;

    switch (a)
    {
    case 18:
        cout<<"You are Eligible";
        break;
    case 22:
        cout<<"You can enjoy";
        break;
    
    default:
        cout<<"Go byeeeee";
        break;
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    char opr;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter the Operation to be Performed : ";
    cin>>opr;


    switch (opr)
    {
    case '+':
        cout<<"a + b = "<<(a+b)<<endl;
        break;
    case '-':
        cout<<"a - b = "<<(a-b)<<endl;
        break;
    case '*':
        cout<<"a * b = "<<(a*b)<<endl;
        break;
    case '/':
        cout<<"a / b = "<<(a/b)<<endl;
        break;
    case '%':
        cout<<"a % b = "<<(a%b)<<endl;
        break;
    
    default:
        cout<<"Please Enter a Valid Opeartion."<<endl;
        break;
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter the Amount : ";
    cin>>a;

    int hun = 0;
    int fif = 0;
    int twe = 0;
    int one = 0;
    int rem = a;


    switch (1)
    {
    case 1:
        hun = a / 100;
        rem = a % 100;
        
    case 2:
        fif = rem / 50;
        rem = rem % 50;

    case 3:
        twe = rem / 20;
        rem = rem % 20;

    case 4:
        one = rem / 1;
        rem = rem % 1;

    default:
        break;
    }

    cout<<"Hundred Notes : "<<hun<<endl;
    cout<<"Fifty Notes : "<<fif<<endl;
    cout<<"Twenty Notes : "<<twe<<endl;
    cout<<"One Notes : "<<one<<endl;

    return 0;
}
*/

