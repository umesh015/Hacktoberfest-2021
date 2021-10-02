/*
To find Largest Sum of Contiguous Subarray
code by umesh
*/
#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(int arr[], int n){
    int maxk=arr[0];
    int maxf=arr[0];
    for(int i=1;i<n;i++){
        maxk=max(arr[i],arr[i]+maxk);
        maxf=max(maxf,maxk);
    }
    return maxf;
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";    
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }     
    cout <<"Largest sum of contiguous subarray is: "<<maxSubarraySum(a, n) << endl;
}
