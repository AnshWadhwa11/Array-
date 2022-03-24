#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    float ar[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>ar[i];
    }
    for(int i = 0;i<n;i++){
        if(ar[0]<ar[i]){
            ar[0] = ar[i];
        }
    }
        cout<<"Largest Number is: "<<ar[0]<<endl;  
    return 0;
}