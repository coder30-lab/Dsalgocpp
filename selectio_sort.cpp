#include<iostream>
using namespace std;

void selection_Sort(int a[],int n){
    int i,j,min_index;
/* traverse  to n-1 because last
index is already sorted after
all sorted elementfind min index*/ 

    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i; j<=n-1; j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        //Swapping min value with  1st index
        swap(a[i],a[min_index]);
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
        selection_Sort(arr, n);
        cout<<"after sorting";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ,";
        }
    return 0;
}