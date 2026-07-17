#include<iostream>
using namespace std;

int main(){
    int n,tar;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target element : ";
    cin>>tar;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==tar){
            cout<<"Element Found at index : "<<mid<<endl;
            return 0;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=tar && tar<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(tar>arr[mid] && tar<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
        
    }
    cout<<"-1"<<endl;
    return 0;
}