#include<iostream>
using namespace std;

int main(){
    int n;
    float sum = 0;
    cout<<"Enter the length of array: ";
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>ar[i];
    }
    for(int i = 0;i<n;i++){
        sum = sum + ar[i];
    }
        float avg = sum/n;
        cout<<"Sum is: "<<sum<<endl; 
        cout<<"Average of array is: "<<avg;  
    return 0;
}