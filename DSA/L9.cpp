//-----> ARRAYS



/*
#include<iostream>
using namespace std;

int main(){
    int a[10000] = {0};  //-> initializing all the location with the value '0'
    
    cout<<a[0]<<endl;
    cout<<a[1820]<<endl;
    cout<<a[2939]<<endl;
    cout<<a[3840]<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    // int a1[10000] = {1};   //-> initializing all location with other value will give us a error
    
    int a1[10000] = { [0 ... 9999] = 1};   //-> this will work with different value other than '0'

    cout<<a1[0]<<endl;
    cout<<a1[1820]<<endl;
    cout<<a1[2939]<<endl;
    cout<<a1[3840]<<endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a[10] = {1, 2};  //-> the remaining index will be filled with value '0'

    cout<<a[0]<<endl;  //-> value = 1
    cout<<a[1]<<endl;  //-> value = 2
    cout<<a[4]<<endl;  //-> value = 0
    cout<<a[7]<<endl;  //-> value = 0
    cout<<a[9]<<endl;  //-> value = 0

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19};

    cout<<a[0]<<endl;
    cout<<a[3]<<endl;
    cout<<a[9]<<endl;

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

    int a[n];

    for (int i = 0; i <= n; i++)
    {
        cin>>a[i];
    }

    cout<<endl;
    cout<<"The elements of Array a[] are ";

    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void printarr(int a[], int n){    //-> function for i/o of array and printing array

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

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[n];

    printarr(a,n);
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void printarr(char ch[], int n){   

    for (int i = 0; i <= n; i++)
    {
        cin>>ch[i];
    }

    cout<<endl;
    cout<<"Array : ";
    
    for (int i = 0; i <= n; i++)
    {
        cout<<ch[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    char ch[n];     //-> character array
    printarr(ch,n);

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

int getMax(int a[], int n){
    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }

    }
    
    return max;
}

int getMin(int a[], int n){
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }  
    }
    
    return min;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    // int a[n];         //-> bad practice (not recommended)
    int a[1000];      //-> good practice
    printarr(a,n);

    cout<<endl;

    cout<<"Maximum : "<<getMax(a,n)<<endl;
    cout<<"Minimum : "<<getMin(a,n)<<endl;


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

int getMax(int a[], int n){
    int maxi = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    
    return maxi;
}

int getMin(int a[], int n){
    int mini = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, a[i]);  
    }
    
    return mini;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    // int a[n];         //-> bad practice (not recommended)
    int a[1000];      //-> good practice
    printarr(a,n);

    cout<<endl;

    cout<<"Maximum : "<<getMax(a,n)<<endl;
    cout<<"Minimum : "<<getMin(a,n)<<endl;


    return 0;
}
*/

/*
#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"-----------------------------------------------"<<endl<<endl;
    cout<<"Printing the array using update function."<<endl;

    arr[0] = 120; //-> this will also update in main function. unlike variables in array the values in changed wrt address of the array index.

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"-----------------------------------------------"<<endl<<endl;
} 

int main(){
    int arr[3]={1,2,3};

    update(arr,3);

    cout<<"-----------------------------------------------"<<endl<<endl;
    cout<<"Printing the array in main function."<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl<<endl;

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

int sumarr(int a[], int n ){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    return sum;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[1000];
    printarr(a,n);

    cout<<endl;

    int ans = sumarr(a,n);

    cout<<"Sum : "<<ans<<endl;

    cout<<endl;

    return 0;
}
*/



//---> Linear Search

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

bool search(int a[], int n, int key){

    for (int i = 0; i < n; i++)
    {
        
        if (a[i] == key)
        {
            return 1;
        } 
        
    }
    
    return 0;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[1000];
    printarr(a,n);

    int key;
    cout<<"Enter the Key : ";
    cin>>key;

    bool found = search(a, n, key);

    if (found)
    {
        cout<<"Key is Present";
    }
    else
    {
        cout<<"Key is Not Present";
    }

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

void reversearr(int a[], int n){
    int s = 0;
    int e = n-1;

    for (int i = 0; i <= n/2 ; i++)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }

    cout<<"Reversed Array : ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a[1000];

    printarr(a,n);
    reversearr(a,n);

    return 0;
}
*/