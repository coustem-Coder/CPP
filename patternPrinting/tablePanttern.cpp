#include<iostream>
using namespace std;

// * * * * *   * * * * * 
// * * * *       * * * * 
// * * *           * * * 
// * *               * * 
// *                   * 

int main(){
    int n;
   
    cout<<"enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }
        for(int s=1;s<=(i*2)-1;s++){
            cout<<"  ";
        }
        for(int k=n;k>=i;k--){
            cout<<"* ";
        }
        cout<<endl;
     
    }
}