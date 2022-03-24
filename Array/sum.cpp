#include<iostream>

using namespace std;
int main(){
    int n;
    int sum = 0;
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
    cout<<"Sum of array is: "<<sum;
    return 0;
}