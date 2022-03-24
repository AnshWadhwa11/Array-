#include <iostream>
using namespace std;

int main()
{
    int r;
    cin>>r; 

    int c;
    cin>>c;

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int l=arr[0][0];
    for(int x=0;x<r;x++){
        for(int y=0;y<c;y++){
            if(arr[x][y]>l){
                l=arr[x][y];
            }
        }
    }
    cout<<l;

    return 0;
}