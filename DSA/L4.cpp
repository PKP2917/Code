//-----> C++ Basics_03 -> Patterns



/*
1)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
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

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)  
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
*/


/*
3)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout<<" "<<j;
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
4)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            cout<<" "<<j;
            j--;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}
*/


/*
5)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        
        while (j <= n)
        {
            cout<<" "<<n-j+1;
            j++;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}
*/


/*
6)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;
    int count = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<" "<<count;
            j++;
            count++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
7)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
8)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
9)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
10)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;
    int count = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
11)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        int val = i;

        while (j<=i)
        {
            cout<<val<<" ";
            val++;
            j++;
        }

        cout<<endl;
        i++; 
    }

    return 0;
}
*/


/*
12)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while (j<=i)
        {
            cout<<i-j+1<<" ";
            j++;
        }

        cout<<endl;
        i++;       
    }

    return 0;
}
*/


/*
13) 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while (j<=n)
        {
            char ch = 'A' + i - 1;
            cout<<ch;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}
*/


/*
14)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while (j<=n)
        {
            char ch = 'A' + j - 1;
            cout<<ch<<" ";
    
            j++;
        }
        
        cout<<endl;
        i++;
    }   

    return 0;
}
*/


/*
15)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;
    char ch = 'A';

    while (i<=n)
    {
        int j = 1;

        while (j<=n)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
16)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        char ch = 'A' + i + j - 2;

        while (j<=n)
        {
            cout<<ch<<" ";
            j++;
        }
        
        cout<<endl;
        i++;
    }   

    return 0;
}
*/


/*
17)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while (j<=i)
        {
            char ch = 'A' + i - 1;
            cout<<ch<<" ";
            j++;
        }

        cout<<endl;
        i++;
        
    } 

    return 0;
}
*/


/*
18)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;
    char ch = 'A';

    while (i<=n)
    {
        int j = 1;

        while (j<=i)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }

        cout<<endl;
        i++;
        
    } 

    return 0;
}
*/


/*
19)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while (j<=i)
        {
            char ch = 'A' + i + j - 2;
            cout<<ch<<" ";
            j++;
            ch++;
        }

        cout<<endl;
        i++;
        
    } 

    return 0;
}
*/


/*
20)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        while (j<=i)
        {
            cout<<"*";
            j++;
            
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}
*/


/*
21)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }

        int start = i-1;
        while (start)
        {
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;
    }
    
    return 0;
}
*/