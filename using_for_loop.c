
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
#include<iostream>
 
using namespace std;
 
 
int main (void)
{
 
  int r=0,a=0,n,b=1,i,c;
  char redo;
  do
  {
    a=0;
    b=1;
    cout<<"enter the the value of n:";
    cin>> n;
    if(n>100){
      cout<<"enter some lessor value"<<endl;
    }
    else{
      cout<<a<<endl;
      for (i=0;i<=n;i++)
      {
        c=a+b;
        a=b;
        b=c;
        cout<<"serial no."<<i+1<<"==";
        cout<<a <<endl;
      }
      cout<<"enter y or Y to continue:";
      cin>>redo;
      cout<<endl<<endl;
    }
  }
  while(redo=='y'||redo=='Y');
 
 
 
  return 0;
}