#include <iostream>
using namespace std;
int main(){
  int arr[35],n,x,pos=-1;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  cin>>x;
  for(int j=0;j<n;j++)
    if(arr[j]==x){
      pos=j;
      break;
    }
  if(pos!=-1)cout<<(pos+1)<<endl;
  else cout<<"No"<<endl;
  return 0;
}
