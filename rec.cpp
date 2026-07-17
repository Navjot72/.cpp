#include<iostream>
using namespace std;
void search(int arr[],int low,int high,int tar){
    if(low > high){   // base case
        cout << "-1" << endl;
        return;
    }
       int mid=low+(high-low)/2;
        if(arr[mid]==tar){
            cout<<"Element Found at index : "<<mid<<endl;
            return;
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
        search(arr,low,high,tar);
}
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
    search(arr,low,high,tar);
    return 0;
}