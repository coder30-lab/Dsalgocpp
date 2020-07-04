#include <iostream>

using namespace std;


int main()
{
    int array[1000];
    int n,key;
    cout<<" Enter number of Element  you want in array and Input Element";
    cin>>n;
    

    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    cout<<"Enter Key you want to Search";
    cin>>key;
    
    int i;
    for(i=0; i<n; i++){
        if(array[i]==key){
        cout<<key<<" is present at index  "<<i<<endl;
        break;
        }
    }    
    if(i==n){
        cout<<key<<" is not present i array";
    }

    return 0;
}
