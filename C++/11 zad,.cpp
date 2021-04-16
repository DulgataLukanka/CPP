#include <iostream>
using namespace std;
int main(){
  int arr[10],n,x,flag=0;
  cin>>n;
  for(inti=0;i<n;i++)cin>>arr[i];
  cin>>x;
  for(intj=0;j<n;j++)
    if(arr[j]==x){
      flag=1;
      break;
    }
  if(flag)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
