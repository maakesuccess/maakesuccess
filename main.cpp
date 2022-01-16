#include <iostream>

using namespace std;
int sumOfBatches(int a,int b)
{
    int sum=0;

    for(int i=a;i<=b;i++)
    {
        sum+=i;
    }
  return sum;
}
int main()
{
  int a,b,q;
  cout<<"Please enter a,b and q respectively"<<endl;
  cin>>a>>b>>q;
  int maxnum=a-1,minnum=a;
  if(a>=1&&b>a&& (b-a+1)%q==0)
  {
     while(b>a)
     {   maxnum+=q;
         cout<<"Sum from "<<minnum<<" to "<<maxnum<<": "<<sumOfBatches(minnum,maxnum)<<endl;
         cout<<"Sum from "<<a<<" to "<<maxnum<<": "<<sumOfBatches(a,maxnum)<<endl;
         minnum=maxnum+1;
         b-=q;
         cout<<endl;
     }
  }
  else{
    cout<<"The sum of batches is unable to be completed!!"<<endl;
  }
    return 0;
}
