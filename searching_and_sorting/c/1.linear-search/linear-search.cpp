#include<iostream>

using namespace std;

char linear_search(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == x){
            return 'y';
        }
    }
    return 'n';
}

int main(){
    int a[] = {2,3,4,5,6,7,8,9,0,1,11,23,45,67,89,91};
    int len = 20;
    cout<< linear_search(a,len,11) <<endl;
}

