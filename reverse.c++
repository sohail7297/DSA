#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev =0;
    while(n>0){
        int lastdigit= n%10;

        rev= rev*10+lastdigit;
        n=n/10;
        
    }
    return rev;

}

int main(){
    int n;
    cin>> n;
    int revnum= reverse(n);
    cout << revnum;
}