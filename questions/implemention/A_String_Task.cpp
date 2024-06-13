#include<iostream>

#include<string>
using namespace std;

int main()
{
    int n;

   string s;
   cin>>s;
   n=s.length();
//    char ch='.';

   for(int i=0;i<n;i++)
   {
       if(s[i]>='A' && s[i]<='Z')
       {
           s[i]+=32;
       }

       if(s[i]=='a' || s[i]=='i'|| s[i]=='o' || s[i]=='y' || s[i]=='u' || s[i]=='e' || s[i]=='A' || s[i]=='I'|| s[i]=='O' || s[i]=='Y' || s[i]=='U' || s[i]=='E')
       {

       continue;
       }
       else

       {
           cout<<"."<<s[i];
       }
   }

}
