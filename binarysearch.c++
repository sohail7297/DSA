#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter size:";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element:";
        cin>>arr[i];
    }
    cout<<"Enter key to be found";
    cin>>key;

    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
        {
            cout<<"Element Found";
            return 0;
        }

        else if(arr[mid]<key)
            low=mid+1;

        else
            high=mid-1;
    }

    cout<<"Element Not Found";

    return 0;
}