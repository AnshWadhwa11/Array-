#include<iostream>
using namespace std;

int main(){
    int n;
    int sum =0,odd_no = 0;
    cout<<"Enter the length of array: ";
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>ar[i];
    }
    for(int i = 0;i<n;i++){
        if(ar[i]%2 !=0){
            cout<<ar[i]<<endl;
            odd_no = odd_no + 1;
            sum = sum + ar[i];
        }
    }    
        cout<<"Odd number in array is: "<<odd_no<<endl;
        cout<<"Sum of odd number is: "<<sum;
    return 0;
}