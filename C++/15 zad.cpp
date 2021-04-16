#include <iostream>
using namespace std;
int main(){
  int n,br=0;
  double arr[24],sum=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<n;j++){
    if(arr[j]>0){
      br++;
      sum+=arr[j];
    }
  }
  if(br!=0)cout<<(sum/br)<<endl;
  else cout<<0<<endl;
  return 0;
}
