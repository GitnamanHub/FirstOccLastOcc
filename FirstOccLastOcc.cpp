#include<iostream>
using namespace std;

int firstocc(int arr[], int key, int n)
{
    int start=0, end=n-1;
    int mid=start+(end-start)/2;
    int ans{-1};

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            end=mid-1;
            ans=mid;
        }
        
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        
        if(arr[mid]<key)
        {
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }

    return ans;
}

int Lastocc(int arr[], int key, int n)
{
    int start=0, end=n-1;
    int mid=start+(end-start)/2;
    int ans{-1};

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            start=mid+1;
            ans=mid;
        }
        
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        
        else if(arr[mid]<key)
        {
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }

    return ans;

}

int main()
{
    int arr[5]={1,2,3,3,5};
    int key=2;
    int n=5;
    cout<<"First occourrence of "<<key<<" is at index "<<firstocc(arr,key,n)<<endl;
    cout<<"Last occourrence of "<<key<<" is at index "<<Lastocc(arr,key,n)<<endl;

}