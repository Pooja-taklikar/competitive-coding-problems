

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of aaray" <<endl;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int counter=1;
      while(counter <n)
      {
          for(int i=0;i<n-counter;i++){
              if(arr[i]>arr[i+1]){
                  swap ( arr[i],arr[i+1]);
              }
          }
          
      }
        counter ++;
     
     for (int i=0;i<n;i++){
         
         cout<< "THE SORTED ARR IS" <<arr[i]<< endl;
         
     }cout<<endl;
    return 0;
}
