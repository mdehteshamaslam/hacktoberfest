#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,4,6,12,9,6};
    int size=sizeof(a)/sizeof(int);
    for(int j=0;j<size-1;j++){
    for(int i=0;i<size-j-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<"   ";
    }
    return 0;
}
