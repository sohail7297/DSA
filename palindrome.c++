#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    int d=n;
    int rev=0;

    while(n>0){
        int lastdigit=n%10;
        rev= rev*10+ lastdigit;

        n=n/10;

        // return rev;
    
    }
    if(d==rev){
            cout<< "it is palindrome";
     }
    else{
            cout << "It is not palindrome";
        }
    }
