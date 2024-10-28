#include<iostream>
using namespace std;
int main(){
    
    int nums[]={5, 15 ,29, 1, -15, 24};
    int size=6;
    int largest =INT_MIN;

    for(int i=0;i<size; i++){
        if(nums[i]>largest){
            largest= nums[i];
        }
        
        largest=max(largest, nums[i]);
    }
    int count,hat=0;
    while(count>0)
    {
        count=largest/10;
        hat++;
    }

    cout<<hat<<endl;
    return 0;
}