#include<iostream>
using namespace std;
int main()
{
int t;
  cin>>t;
  while(t--)
    {
   string s;
      cin>>s;
      if(s== "abc") cout<<"YES\n";
      else if(s == "acb") cout << "YES\n";
        else if(s == "bac") cout << "YES\n";
        else if(s == "cba") cout << "YES\n";
        else cout << "NO\n";
    
    
    }
return 0




  
}
