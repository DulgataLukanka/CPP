#include <iostream>
using namespace std;
int main(){
  int n;
  double arr[10],sum=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++)
    if(arr[j]<0)sum+=arr[j];
  cout<<sum<<endl;
  return 0;
}
