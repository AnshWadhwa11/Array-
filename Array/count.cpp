#include<iostream>

using namespace std;
int main(){
    int n;
    int positive_no = 0, negative_no = 0;
    cout<<"Enter the length of array: ";
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>ar[i];
    }
    for(int i = 0;i<n;i++){
        if (ar[i]< 0){
            negative_no = negative_no + 1;
        }
        else{
            positive_no = positive_no + 1;
        }
    }
    cout<<"Positive number in array is: "<<positive_no<<endl;
    cout<<"Negative number in array is: "<<negative_no;
    return 0;
}