#include<iostream>
using namespace std;
// ****
//  ***
//   **
//    *
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i-1){
            cout<<" "; 
            j++;
        }
        j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}