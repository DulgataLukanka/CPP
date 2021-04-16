#include <iostream>
using namespace std;
int main(){
  int n,max,ind,arr[100];
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  max=arr[0];
  ind=0;
  for(int j=1;j<n;j++)
    if(arr[j]>max){
      max=arr[j];
      ind=j;
    }
  cout<<max<<" "<<ind<<endl;
  return 0;
}
