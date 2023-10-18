#include <iostream>
#include <string>
using namespace std;
int main()
{int y=0,z=0,m=0;
char str[10];
int l = 0;
while(str[l] != '\0')
{
l++;
}
    cout<<"entrer un mot";
    cin>>str;
    for(int i=0;i<l;i++)
    {
      if(str[i]>='a' &&  str[i]<='z'){
y++;
      }
        if(str[i]>=0 &&  str[i]<=9){
z++;
      }


    }
    m=l-(y+z);
    if(y>=3 && z>=3 && m>=2)
    {
        cout<<"fort";

    }
    else{
        cout<<"fort";

    }


    return 0;
}