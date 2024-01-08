//
//  main.cpp
//  scopping
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include<iostream>
using namespace std;
    
int x=10;
int main()
{
    int x=50;
    {
        int x=30;
        cout<<x<<endl;
    }
        
    cout<<x<<endl;
    cout<<::x<<endl;
        
}
    
