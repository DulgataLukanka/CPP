#include <iostream>
using namespace std;
int main(){
  int n,pr=1,arr[39];
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++)
    if(arr[j]%7==0)pr*=arr[j];
  if(pr==1)cout<<"No"<<endl;
  else cout<<pr<<endl;
  return 0;
}
