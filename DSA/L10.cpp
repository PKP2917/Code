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

int intersec(int a[], int b[], int n, int m){

    int i = 0;
    int j = 0;

    cout<<"Intersection of Two Arrays : ";

    while ((i<n) && (j<m))
    {
        if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }

        else if (a[i] < b[j])
        {
            i++;
        }

        else
        {
            j++;
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
    
    int a[n];
    int b[m];

    cout<<endl;
    printarr(a,n);
    cout<<endl;
    printarr(b,m);
    cout<<endl;

    intersec(a,b,n,m);

    return 0;
}
*/


/*
#include <iostream>
#include <algorithm>  
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

void findPairSum(int a[], int n, int s) {
    sort(a, a + n);  
    int i = 0, j = n - 1;
    bool found = false;

    while (i < j) {
        int sum = a[i] + a[j];

        if (sum == s) {
            cout << "Pair found: (" << a[i] << ", " << a[j] << ")\n";
            found = true;
            i++;  
            j--;  
        }
        else if (sum < s) {
            i++;  
        }
        else {
            j--;  
        }
    }

    if (!found)
        cout << "No pair found.\n";
}
 
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int s;
    cout<<"Enter s : ";
    cin>>s;

    int a[n];

    printarr(a,n);
    findPairSum(a, n, s);

    return 0;
} 
*/