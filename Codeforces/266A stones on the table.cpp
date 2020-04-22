///accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char  res[50];
    int i,n,cnt=0;
    scanf("%d",&n);
      char str[n];
      scanf("%s",str);
      for(i=0;i<n;i++)
      {
          if(i==0)
          {
              cnt++;
          }
          else
          {
              if(str[i]!=str[i-1])
                  cnt++;
          }
      }
      printf("%d\n",(strlen(str)-cnt));
    return 0;
}
