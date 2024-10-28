#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
int max_val=INT_MIN;
int min_val=INT_MAX;
for(int i=0;i<n;i++)
{
max_val=max(max_val,arr[i]);
min_val=min(min_val,arr[i]);
}
int ans=max_val+min_val;
return ans;
}

int main(){
    
    int arr[]={-1,2,3};
    int n=3;

    cout<<sum(arr,n)<<endl;
    return 0;
}