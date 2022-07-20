int main()
{
   string s;
   cin>>s;
   int n=s.size();
   string s1;
   vector<string> v;
 //  cout<<"n  : "<<n<<endl;
   for(int i=0;i<n;i++)
   {
      // cout<<i<<endl;
        if(i==n-1)
       {
           s1+=s[i];
           //cout<<"1";
           v.push_back(s1);
           s1="";
           break;
       }
       else if(s[i]!='.')
       {
           s1+=s[i];
       }
       else
       {
           v.push_back(s1);
           s1="";
       }
   }
  for(int i=v.size()-1;i>=0;i--)
  {
      cout<<v[i];
      if(i>0)
      cout<<".";
  }
}
