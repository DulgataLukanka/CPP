#include <iostream>
using namespace std;
int main(){
  int n,arr[29],br=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++)
    if(arr[j]%2==0)br++;
  cout<<br<<endl;
  return 0;
}
