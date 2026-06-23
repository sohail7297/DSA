#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int count(int a){
    int counts=0;
    while(a>0){
        a=a/10;
        counts++;
    }
}

bool amstrong(int a){
    int sum=0;
    int num=a;
    int len= count(a);
    while (num>0){
        int b=num%10;
        sum= sum+ pow(b,len);
        num=num/10;
    }
    return sum == num;
}

int main(){
    int n;
    cin >> n;
    int value = amstrong(n);
    if(amstrong(n)){
        cout << "Amstrong";

    }
    else{
        cout<< "Not amstrong";

    }
}