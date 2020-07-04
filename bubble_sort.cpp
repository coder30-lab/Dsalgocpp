#include<iostream>
using namespace std;
//Bubble sort
void bubble_Sort(int a[],int n){
//N-1 largest number to the end

for(int itr=1; itr<=n-1; itr++){
    for(int j=0; j<=(n-1-itr); j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}

}
int main(){

        int n;
        int arr[1000];
        cout<<"Enter  no of element in array :";
        cin>>n;
        // Input Element in array
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        bubble_Sort(arr, n);
        cout<<"after sorting";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ,";
        }
    return 0;
}