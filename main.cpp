#include <iostream>
#include <fstream>

using namespace std;
ifstream in ("data.in");
ofstream out("data.out");
int i,f[101],n,x;
int main()
{in>>n;
for(i=1; i<=n;i++){
    in>>x;
    f[x]++;}
int m=0, j=0;
for(i=1; i<=100;i++)
if(f[i]>m){m=f[i];j=i;}
out<<m<<endl;
f[j]=0;

m=0; j=0;
for(i=1; i<=100;i++)
if(f[i]>m){m=f[i];j=i;}
out<<m<<endl;
f[j]=0;

 m=0; j=0;
for(i=1; i<=100;i++)
if(f[i]>m){m=f[i];j=i;}
out<<m<<endl;
f[j]=0;

    return 0;
}
