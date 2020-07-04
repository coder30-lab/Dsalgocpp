#include <iostream>
using namespace std;
/* 
binary search performed on an orted arrar 
input element in sorted order 
for performing binary search
*/
 int binary_search(int a[],int n,int key){
    int s,e,mid;
     s=0;
     e=n-1;
     
     while(s<=e){
     mid =s+e/2;    
         if(a[mid]==key){
         return mid;
    
         }else if(a[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
          
     }
     return -1;
    
}
int main() {
	// your code goes here
	int n,key;
	int a[1000];
    cout<<"entern no";
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	cout<<"Enter key you want to search";
	cin>>key;
	
	int result;
	result=binary_search(a,n,key);
	cout<<result;
	
	return 0;
}
