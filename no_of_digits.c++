#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int count_digit(int n){
    int count=(int)(log10(n)+1);
    return count;
}

int main(){
    int n;
    
    cin >>n;
    int dig= count_digit(n);
    cout << dig<<endl;
    
}

