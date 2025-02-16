//-----> ARRAYS Problem Solving


/*
#include<iostream>
using namespace std;

void printarr(int a[], int n){   

    for (int i = 0; i <= n; i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    cout<<"Array : ";
    
    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

void swaparr(int a[], int n){

    for (int i = 0; i < n; i+=2)
    {
        if (i+1 < n)
        {
            swap(a[i], a[i+1]);
        }
    }
    
    cout<<"Swapped Array : ";

    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[n];

    cout<<endl;
    printarr(a,n);
    cout<<endl;
    swaparr(a,n);
    cout<<endl;

    return 0;
}
*/


/*
#include<iostream>
using namespace std;

void printarr(int a[], int n){   

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    cout<<"Array : ";
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

int findUnique(int a[], int n ){

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];    //-> XOR properties -> (1. a^a = 0      and     2. a^0 = a)
    }
    
    return ans;

}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[1000];

    printarr(a,n);
    cout<<endl;

    int res = findUnique(a,n);
    cout<<"Unique Number : "<<res<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void printarr(int a[], int n){
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    cout<<"Array : ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }    
    
    cout<<endl;
}

int findDuplicate(int a[], int n){
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];   //-> for all elements of array
    }
    
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;      //-> for 0 to n-1 numbers
    }
    
    return ans;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[n];

    printarr(a,n);
    cout<<endl;

    int res = findDuplicate(a,n);
    cout<<"Duplicate Number : "<<res<<endl;

    return 0;
}
*/


#include<iostream>
using namespace std;

void printarr(int a[], int n){
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    cout<<"Array : ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }    
    
    cout<<endl;
}

int intersec(int a[], int b[], int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
             
        }       
    }
}


int main(){
    int n;
    int m;

    cout<<"Enter n : ";
    cin>>n;
    
    cout<<"Enter m : ";
    cin>>m;
    


    return 0;
}