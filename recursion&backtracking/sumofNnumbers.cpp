// Sum of N numbers using recurssion

#include<bits/stdc++.h>
using namespace std;

void func(int i,int sum){

    if(i<1){
        cout<<sum;
        return;
    }
    else{
        func(i-1,sum+i);
    }
}
int main(){
    int n;
    cin>>n;
    func(n,0);

    return 0;
}

// Alternate method

#include<bits/stdc++.h>
using namespace std;

int sum(int i){
    if(i==0){
        return 0;
    }
    return i+sum(i-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);

    return 0;
}

    