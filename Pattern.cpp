#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j=0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    printPattern(n);

    return 0;
}