// Print linearly numbers by backtracking
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){

    if(i<1){
        return;
    
    }
    else{
        func(i-1,n);
        cout<<i<<"\n";  //function is call before the print
    }
}
int main(){
    int n;
    cin>>n;
    func(n,n);

    return 0;

}




