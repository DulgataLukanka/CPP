#include <iostream>
using namespace std;
int main(){
  int n;
  double arr[125],max,min;
  int indMax,indMin;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  max=arr[0];
  min=arr[0];
  indMax=0;
  indMin=0;
  for(int j=1;j<n;j++){
    if(arr[j]>max){max=arr[j];indMax=j;}
    if(arr[j]<min){min=arr[j];indMin=j;}
  }
  double swap;
  swap=arr[indMax];
  arr[indMax]=arr[indMin];
  arr[indMin]=swap;
  for(int k=0;k<n;k++)cout<<arr[k]<<" ";
  return 0;
}
