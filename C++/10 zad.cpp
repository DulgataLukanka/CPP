#include <iostream>
using namespace std;
int main(){
  int k,br=0;
  cin>>k;
  char s[100];
  for(int i=0;i<k;i++)cin>>s[i];
  for(int j=0;j<k;j++)
    if(s[j]=='a')br++;
  cout<<br<<endl;
  return 0;
}
